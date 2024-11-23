package com.pertemuan2.latgui;

import java.awt.*;  // Mengimpor kelas untuk bekerja dengan grafis 2D
import java.awt.image.*;  // Mengimpor kelas untuk manipulasi gambar
import javax.swing.*;  // Mengimpor kelas untuk membuat GUI menggunakan Swing
import java.io.*;  // Mengimpor kelas untuk input/output file
import javax.imageio.*;  // Mengimpor kelas untuk membaca dan menulis gambar

/**
 * Panel untuk menampilkan gambar dan efek pengolahan citra seperti blur dan sharpening
 */
public class Penajaman extends JPanel {

    private BufferedImage image, imageBlurred, imageSharpened;  // Variabel untuk menyimpan gambar asli, gambar yang diblur, dan gambar yang ditajamkan
    private int panelWidth = 450;  // Lebar setiap panel (untuk tiga panel)
    private int panelHeight = 400;  // Tinggi panel (lebih pendek agar pas untuk caption di dalam gambar)

    // Konstruktor untuk kelas Penajaman
    public Penajaman() {
        // Menetapkan ukuran preferensi panel ini (lebar total untuk 3 panel gambar)
        this.setPreferredSize(new Dimension(1350, 500));

        try {
            // Memuat gambar dari file dengan menggunakan ImageIO.read()
            image = ImageIO.read(new File("src/main/java/com/pertemuan2/latgui/contoh1.jpg"));
            // Menerapkan efek blur yang sangat kuat pada gambar
            imageBlurred = applyVeryStrongGaussianBlur(image); 
            // Menerapkan efek penajaman pada gambar
            imageSharpened = applyStrongSharpening(image); 
        } catch (IOException e) {
            e.printStackTrace();  // Menangani pengecualian jika file gambar tidak ditemukan
        }
    }

    // Metode untuk menggambar komponen pada panel
    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);  // Memanggil metode paintComponent dari JPanel
        Graphics2D g2 = (Graphics2D) g;  // Mengonversi objek Graphics menjadi Graphics2D untuk kontrol grafis lebih baik

        // Menyesuaikan ukuran gambar untuk setiap panel
        Image resizedImage = image.getScaledInstance(panelWidth, panelHeight, Image.SCALE_SMOOTH);
        Image resizedBlurred = imageBlurred.getScaledInstance(panelWidth, panelHeight, Image.SCALE_SMOOTH);
        Image resizedSharpened = imageSharpened.getScaledInstance(panelWidth, panelHeight, Image.SCALE_SMOOTH);

        // Gambar biasa (asli) di panel kiri
        g2.setClip(10, 10, panelWidth, panelHeight);  // Mengatur area gambar untuk panel kiri
        g2.drawImage(resizedImage, 10, 10, this);  // Menggambar gambar asli
        g2.setColor(Color.RED);  // Mengatur warna teks menjadi merah
        g2.setFont(new Font("ARIAL", Font.BOLD, 20));  // Mengatur font untuk caption
        g2.drawString("Foto Biasa", 10 + (panelWidth / 4), panelHeight - 10);  // Menambahkan caption di bawah gambar asli

        // Gambar dengan efek Gaussian Blur di panel tengah
        g2.setClip(panelWidth + 20, 10, panelWidth, panelHeight);  // Mengatur area gambar untuk panel tengah
        g2.drawImage(resizedBlurred, panelWidth + 20, 10, this);  // Menggambar gambar yang sudah diblur
        g2.drawString("Gaussian Blur (Very Strong)", panelWidth + 20 + (panelWidth / 4), panelHeight - 10);  // Caption untuk gambar blur

        // Gambar yang sudah disharpening di panel kanan
        g2.setClip(2 * (panelWidth) + 30, 10, panelWidth, panelHeight);  // Mengatur area gambar untuk panel kanan
        g2.drawImage(resizedSharpened, 2 * (panelWidth) + 30, 10, this);  // Menggambar gambar yang sudah disharpening
        g2.drawString("Sharpening (Stronger)", 2 * (panelWidth) + 30 + (panelWidth / 4), panelHeight - 10);  // Caption untuk gambar sharpened
    }

    /**
     * Mengaplikasikan efek Gaussian Blur yang sangat kuat pada gambar
     * @param img Gambar yang akan diblur
     * @return Gambar yang sudah diblur
     */
    private BufferedImage applyVeryStrongGaussianBlur(BufferedImage img) {
        // Membuat kernel Gaussian 5x5 yang lebih kuat untuk efek blur
        float[] matrix = {
            1 / 280f,  4 / 280f,  6 / 280f,  4 / 280f,  1 / 280f,  // Baris pertama
            4 / 280f, 16 / 280f, 24 / 280f, 16 / 280f,  4 / 280f,  // Baris kedua
            10 / 280f, 40 / 280f, 60 / 280f, 40 / 280f,  10 / 280f,  // Baris ketiga (lebih kuat dari kernel standar)
            4 / 280f, 16 / 280f, 24 / 280f, 16 / 280f,  4 / 280f,  // Baris keempat
            1 / 280f,  4 / 280f,  6 / 280f,  4 / 280f,  1 / 280f   // Baris kelima
        };
        // Membuat objek Kernel dengan ukuran 5x5 dan matriks di atas
        Kernel kernel = new Kernel(5, 5, matrix);  
        // Menerapkan konvolusi (proses blur) menggunakan kernel yang dibuat
        ConvolveOp convolveOp = new ConvolveOp(kernel, ConvolveOp.EDGE_NO_OP, null);
        return convolveOp.filter(img, null);  // Mengembalikan gambar yang sudah diblur
    }

    /**
     * Mengaplikasikan efek penajaman pada gambar (Lebih Tajam)
     * @param img Gambar yang akan diproses
     * @return Gambar yang sudah ditajamkan
     */
    private BufferedImage applyStrongSharpening(BufferedImage img) {
        // Membuat kernel penajaman 3x3 yang lebih kuat untuk efek sharpening
        float[] matrix = {
            -1, -1, -1,  // Baris pertama (negatif untuk kontras dengan pusat)
            -1,  9, -1,  // Baris kedua (nilai 9 di tengah untuk memperkuat pusat)
            -1, -1, -1   // Baris ketiga (negatif untuk kontras dengan pusat)
        };
        // Membuat objek Kernel dengan ukuran 3x3 dan matriks di atas
        Kernel kernel = new Kernel(3, 3, matrix);  
        // Menerapkan konvolusi (proses sharpening) menggunakan kernel yang dibuat
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);  // Mengembalikan gambar yang sudah ditajamkan
    }
}
