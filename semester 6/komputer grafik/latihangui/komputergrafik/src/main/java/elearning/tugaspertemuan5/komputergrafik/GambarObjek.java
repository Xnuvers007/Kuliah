package elearning.tugaspertemuan5.komputergrafik;

import java.awt.*;
import javax.swing.*;

public class GambarObjek extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        // Gambar Langit
        g2d.setColor(new Color(135, 206, 235)); // Warna langit
        g2d.fillRect(0, 0, getWidth(), 300); // Langit
        
        // Gambar Awan
        g2d.setColor(Color.WHITE);
        g2d.fillOval(150, 20, 80, 50); // Awan 1
        g2d.fillOval(180, 10, 100, 60); // Awan 2
        g2d.fillOval(210, 20, 80, 50); // Awan 3
        
        g2d.fillOval(500, 40, 80, 50); // Awan 4
        g2d.fillOval(530, 30, 100, 60); // Awan 5
        g2d.fillOval(560, 40, 80, 50); // Awan 6

        // Gambar Gunung
        g2d.setColor(new Color(139, 69, 19)); // Warna gunung
        int[] xPoints = {0, 200, 400};
        int[] yPoints = {300, 100, 300};
        g2d.fillPolygon(xPoints, yPoints, 3); // Gunung 1

        g2d.setColor(new Color(160, 82, 45)); // Warna gunung kedua
        int[] xPoints2 = {300, 500, 700};
        int[] yPoints2 = {300, 100, 300};
        g2d.fillPolygon(xPoints2, yPoints2, 3); // Gunung 2

        // Gambar Matahari
        g2d.setColor(Color.YELLOW);
        g2d.fillOval(50, 50, 80, 80); // Matahari

        // Gambar Jalan
        g2d.setColor(Color.GRAY);
        g2d.fillRect(0, 300, 800, 200); // Jalan
        g2d.setColor(Color.WHITE);
        for (int i = 0; i < 800; i += 40) {
            g2d.fillRect(i + 20, 380, 20, 10); // Garis putus-putus
        }
        
        // Gambar rumput dan hutan
        g2d.setColor(new Color(60, 179, 113)); // Warna hijau rumput
        g2d.fillRect(0, 400, 800, 100); // hutan (daunnya saja) bagian bawah

        // Gambar pola "V" untuk sawah
        g2d.setColor(new Color(34, 139, 34));
        for (int i = 0; i < 800; i += 80) {
            int[] xV = {i, i + 40, i + 80};
            int[] yV = {400, 500, 400};
            g2d.fillPolygon(xV, yV, 3); // Pola "V"
        }

        // Gambar Mobil
        g2d.setColor(Color.RED);
        g2d.fillRoundRect(300, 250, 100, 50, 20, 20); // Badan mobil
        g2d.setColor(Color.BLACK);
        g2d.fillOval(320, 290, 20, 20); // Roda depan
        g2d.fillOval(360, 290, 20, 20); // Roda belakang

        // Gambar Bunga (geser ke kanan)
        g2d.setColor(Color.GREEN);
        g2d.fillRect(686, 220, 10, 50); // Batang (geser ke kanan)
        g2d.setColor(Color.RED);
        g2d.fillOval(660, 190, 30, 30); // Kelopak bunga atas (geser ke kanan)
        g2d.fillOval(690, 190, 30, 30); // Kelopak bunga kanan (geser ke kanan)
        g2d.fillOval(660, 220, 30, 30); // Kelopak bunga bawah (geser ke kanan)
        g2d.fillOval(690, 220, 30, 30); // Kelopak bunga kiri (geser ke kanan)
        g2d.setColor(Color.YELLOW);
        g2d.fillOval(675, 205, 30, 30); // Pusat bunga (geser ke kanan)

        // Menambahkan Kredit di Tengah Awan
        g2d.setColor(Color.BLACK);
        Font font = new Font("Arial", Font.BOLD, 18);
        g2d.setFont(font);
        String[] credits = {
            "Indra Dwi A",
            "211011450468",
            "06TPLP003"
        };
        
        // Menghitung posisi Y awal untuk menempatkan teks di tengah awan
        int y = 50; // Posisi Y untuk menempatkan teks di tengah awan
        for (String credit : credits) {
            FontMetrics fm = g.getFontMetrics();
            int x = (getWidth() - fm.stringWidth(credit)) / 2;
            g2d.drawString(credit, x, y); // Menambahkan teks kredit
            y += fm.getHeight(); // Menaikkan posisi Y untuk baris berikutnya
        }
    }
}
