package com.pertemuan2.latgui; // Deklarasi paket tempat kelas ini berada, yaitu `com.pertemuan2.latgui`

// Mengimpor berbagai kelas untuk mendukung manipulasi grafis, pengolahan gambar, dan antarmuka pengguna
import java.awt.*;             // apa itu java.awt = Abstract Window Toolkit (AWT) adalah API Java yang digunakan untuk membuat aplikasi GUI (Graphical User Interface).
import java.awt.image.*;       // apa itu java.awt.image = package yang berisi kelas dan antarmuka yang digunakan untuk mengolah/manipulasi gambar.
import javax.swing.*;          // apa itu javax.swing = package yang berisi kelas-kelas yang digunakan untuk membuat aplikasi GUI (Graphical User Interface) dengan Java Swing. Swing adalah toolkit GUI yang lebih modern dan fleksibel dibandingkan AWT.
import java.io.*;              // apa itu java.io = package yang berisi kelas-kelas yang digunakan untuk operasi input dan output, seperti membaca file.
import javax.imageio.*;        // apa itu javax.imageio = package yang berisi kelas-kelas yang digunakan untuk membaca dan menulis file gambar.

/**
 * Kelas `Penajaman` adalah panel Swing untuk menampilkan gambar asli
 * dan gambar yang telah dimodifikasi dengan efek sharpening (penajaman).
 */
public class Penajaman extends JPanel { // Deklarasi kelas `Penajaman` sebagai turunan dari JPanel
    // Variabel instance untuk menyimpan gambar asli dan gambar yang telah diproses
    private BufferedImage image, imageSharpened; // `image` untuk gambar asli, `imageSharpened` untuk hasil sharpening
    
    // Ukuran setiap panel tempat gambar akan ditampilkan
    private int panelWidth = 450;  // Lebar setiap panel
    private int panelHeight = 400; // Tinggi panel

    /**
     * Konstruktor kelas `Penajaman`. Konstruktor ini akan dipanggil saat objek dibuat.
     * Bertugas mengatur ukuran panel dan memuat gambar.
     */
    public Penajaman() {
        // Menentukan ukuran preferensi panel (digunakan saat ditampilkan di JFrame)
        this.setPreferredSize(new Dimension(1350, 500)); // Total lebar: 3 panel (450 x 3), tinggi: 500

        try {
            // Memuat gambar dari file ke dalam objek BufferedImage menggunakan ImageIO
            image = ImageIO.read(new File("src/main/java/com/pertemuan2/latgui/contoh1.jpg"));

            if (image == null) { // Jika gambar tidak ditemukan, cetak pesan kesalahan
                image = ImageIO.read(new File("./contoh1.jpg"));
            }

            // Mengaplikasikan efek sharpening pada gambar asli
            imageSharpened = applyStrongSharpening(image); 
        } catch (IOException e) { // Penanganan jika file gambar tidak ditemukan
            e.printStackTrace(); // Cetak stack trace untuk debugging
        }
    }

    /**
     * Metode untuk menggambar elemen grafis pada panel. Dipanggil secara otomatis oleh Swing.
     * @param g Objek Graphics yang digunakan untuk menggambar.
     */
    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g); // Memanggil implementasi `paintComponent` pada superclass
        Graphics2D g2 = (Graphics2D) g; // Konversi objek Graphics menjadi Graphics2D untuk fitur lebih lanjut

        // Resize gambar asli dan gambar sharpened agar sesuai dengan ukuran panel
        Image resizedImage = image.getScaledInstance(panelWidth, panelHeight, Image.SCALE_SMOOTH); // Resize gambar asli
        Image resizedSharpened = imageSharpened.getScaledInstance(panelWidth, panelHeight, Image.SCALE_SMOOTH); // Resize gambar sharpened

        // Menampilkan gambar asli di panel kiri
        g2.setClip(10, 10, panelWidth, panelHeight); // Atur area gambar (panel kiri)
        g2.drawImage(resizedImage, 10, 10, this); // Gambarkan gambar asli pada area ini

        // Tambahkan caption untuk gambar asli
        g2.setColor(Color.RED); // Warna teks caption: merah
        g2.setFont(new Font("ARIAL", Font.BOLD, 22)); // Set font untuk caption
        g2.drawString("Foto Biasa", 10 + (panelWidth / 4), panelHeight - 10); // Tulis teks di bawah gambar

        // Menampilkan gambar sharpened di panel tengah
        g2.setClip(panelWidth + 20, 10, panelWidth, panelHeight); // Atur area gambar (panel tengah)
        g2.drawImage(resizedSharpened, panelWidth + 20, 10, this); // Gambarkan gambar sharpened

        // Tambahkan caption untuk gambar sharpened
        g2.drawString("Sharpening", panelWidth + 20 + (panelWidth / 4), panelHeight - 10); // Teks deskripsi gambar
    }

    /**
     * Metode untuk mengaplikasikan efek sharpening yang kuat pada gambar.
     * @param img Gambar asli yang akan diproses.
     * @return Gambar hasil sharpening.
     */
    private BufferedImage applyStrongSharpening(BufferedImage img) {
        // **Kernel matriks 3x3 untuk efek sharpening yang lebih kuat**
        float[] matrix = {
            -1, -1, -1,  // Nilai di baris pertama: negatif untuk memperlemah area sekitar
            -1,  9, -1,  // Nilai di baris kedua: pusat bernilai tinggi (9) untuk menonjolkan detail
            -1, -1, -1   // Nilai di baris ketiga: negatif untuk menonjolkan kontras
        };

        // Membuat objek Kernel dengan ukuran 3x3 dan matriks di atas
        Kernel kernel = new Kernel(3, 3, matrix);  

        // Menerapkan konvolusi menggunakan kernel yang dibuat
        ConvolveOp convolveOp = new ConvolveOp(kernel);

        // Filter gambar dengan konvolusi dan kembalikan hasilnya
        return convolveOp.filter(img, null); 
    }
}
