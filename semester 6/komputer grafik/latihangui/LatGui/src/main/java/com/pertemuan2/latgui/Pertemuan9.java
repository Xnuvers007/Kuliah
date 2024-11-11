// Deklarasi package dari class ini, menunjukan lokasi file ini berada dalam proyek
package com.pertemuan2.latgui;

// Import semua kelas dari paket java.awt yang digunakan untuk membuat elemen GUI
import java.awt.*; 

// Import semua kelas dari paket java.awt.event yang digunakan untuk menangani event atau aksi
import java.awt.event.*;

// Import semua kelas dari paket java.awt.geom untuk membuat bentuk geometri (lingkaran, persegi panjang, dll)
import java.awt.geom.*;

// Import semua kelas dari paket java.awt.image yang digunakan untuk manipulasi gambar
import java.awt.image.*;

// Import semua kelas dari paket javax.swing untuk membuat elemen GUI berbasis Java Swing
import javax.swing.*;

// Deklarasi kelas `Pertemuan10` yang merupakan turunan dari `JPanel`
// JPanel adalah komponen GUI yang bisa menampung komponen-komponen lain dan menggambar grafik.
public class Pertemuan9 extends JPanel {

    // Konstruktor kelas Pertemuan10, yang akan dipanggil ketika objek dari kelas ini dibuat
    public Pertemuan9(){
        // Mengatur ukuran preferensi dari panel menjadi 400x400 piksel
        this.setPreferredSize(new Dimension(400, 400));
        
        // Mengatur warna latar belakang panel menjadi putih
        this.setBackground(Color.WHITE);
    }

    // Override method `paintComponent` untuk menggambar di panel ini
    // Method ini otomatis dipanggil ketika komponen perlu diperbarui tampilannya
    public void paintComponent(Graphics g){
        // Memanggil `paintComponent` dari superclass untuk memastikan tampilan dasar digambar
        super.paintComponent(g);

        // Mengubah tipe objek `Graphics` ke `Graphics2D`, agar bisa menggunakan fitur grafik lanjutan
        Graphics2D g2 = (Graphics2D) g;

        // Mengatur warna dari grafik 2D menjadi biru
        g2.setColor(Color.BLUE);

        // Menggambar teks "Destination (Rectangle)" pada posisi x=40, y=20 di panel
        g2.drawString("Destination (Rectangle)", 40, 20);

        // Mengubah warna dari grafik 2D menjadi merah
        g2.setColor(Color.RED);

        // Menggambar teks "Source (inverted triangle)" pada posisi x=300, y=20 di panel
        g2.drawString("Source (inverted triangle)", 300, 20);

        // Mengubah warna grafik 2D menjadi hitam untuk menggambar objek berikutnya
        g2.setColor(Color.BLACK);

        // Memanggil method `drawComposite` untuk menggambar bentuk dengan transparansi
        // Diberikan parameter `g2` sebagai grafik 2D dan nilai alpha (transparansi) 0.5
        drawComposite(g2, 0.5f);
    }

    // Method `drawComposite` untuk menggambar objek dengan berbagai jenis komposit Alpha
    public void drawComposite(Graphics2D g2, float alpha){
        // Array `alphaComp` berisi berbagai jenis komposit Alpha yang digunakan untuk efek transparansi
        int [] alphaComp = {
            AlphaComposite.SRC,        // Menentukan bahwa source menggantikan destination
            AlphaComposite.DST_IN,     // Menentukan bahwa hanya bagian source di dalam destination yang ditampilkan
            AlphaComposite.DST_OUT,    // Menampilkan destination di luar source
            AlphaComposite.DST_OVER,   // Menampilkan destination di atas source
            AlphaComposite.SRC_IN,     // Menampilkan source di dalam destination
            AlphaComposite.SRC_OVER,   // Menampilkan source di atas destination
            AlphaComposite.SRC_OUT,    // Menampilkan source di luar destination
            AlphaComposite.CLEAR       // Menghapus semua gambar dari area tertentu
        };

        // Array `caption` berisi nama setiap jenis komposit Alpha untuk ditampilkan sebagai label
        String [] caption = {
            "SRC", "DST_IN", "DST_OUT", "DST_OVER",
            "SRC_IN", "SRC_OVER", "SRC_OUT", "CLEAR"
        };

        // Deklarasi variabel koordinat `x` dan `y` untuk posisi menggambar awal
        int x, y;
        x = y = 40; // Mengatur posisi awal gambar di koordinat (40, 40)

        // Deklarasi objek `AlphaComposite` yang akan menyimpan tipe komposit Alpha
        AlphaComposite ac;

        // Mengatur komposit Alpha penuh (tidak transparan) untuk objek `tac`
        AlphaComposite tac = AlphaComposite.getInstance(AlphaComposite.SRC, 1.0f);

        // Loop untuk mengulangi setiap tipe komposit Alpha dalam `alphaComp`
        for (int j = 0; j < alphaComp.length; j++){
            // Membuat objek `AlphaComposite` dengan tipe alphaComp[j] dan transparansi `alpha`
            ac = AlphaComposite.getInstance(alphaComp[j], alpha);

            // Membuat BufferedImage dengan lebar 75 dan tinggi 80, serta tipe ARGB untuk transparansi
            BufferedImage buffImg = new BufferedImage(75, 80, BufferedImage.TYPE_INT_ARGB);

            // Membuat objek Graphics2D dari BufferedImage untuk menggambar ke dalam image tersebut
            Graphics2D gbi = buffImg.createGraphics();

            // Mengatur warna menjadi biru
            gbi.setColor(Color.BLUE);

            // Menggambar persegi berwarna biru sebagai "destination" di posisi (0, 0) dengan ukuran 50x50 piksel
            gbi.fillRect(0, 0, 50, 50);

            // Mengatur warna menjadi merah
            gbi.setColor(Color.RED);

            // Menerapkan komposit Alpha dari objek `ac`, agar gambar memiliki transparansi sesuai
            gbi.setComposite(ac);

            // Membuat array koordinat x untuk menggambar segitiga terbalik
            int[] xPoints = {25, 75, 50}; // Titik-titik koordinat x dari segitiga
            int[] yPoints = {0, 0, 50}; // Titik-titik koordinat y dari segitiga

            // Menggambar segitiga terbalik merah sebagai "source" menggunakan koordinat di atas
            gbi.fillPolygon(xPoints, yPoints, 3);

            // Menggambar BufferedImage (buffImg) pada panel di koordinat (x, y) yang di-update dalam loop
            g2.drawImage(buffImg, null, x, y);

            // Menggambar teks label dari caption[j] di bawah gambar di koordinat (x, y+70)
            g2.drawString(caption[j], x, y+70);

            // Menambah posisi x sebesar 80 untuk gambar berikutnya dalam baris
            x += 80;
        } //Penutup looping atau perulangan pada alphaComp
    } // Penutup method drawComposite
} // Penutup kelas Pertemuan10
