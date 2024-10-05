package elearning.tugaspertemuan5.komputergrafik;

import java.awt.*;
import javax.swing.*;

public class GambarLingkaran extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        // Mengatur warna latar belakang
        g2d.setColor(Color.WHITE);
        g2d.fillRect(0, 0, getWidth(), getHeight());

        // Menggambar garis kartesius
        g2d.setColor(Color.GRAY);
        int centerX = getWidth() / 2;
        int centerY = getHeight() / 2;

        // Garis horizontal (sumbu X)
        g2d.drawLine(0, centerY, getWidth(), centerY);
        // Garis vertikal (sumbu Y)
        g2d.drawLine(centerX, 0, centerX, getHeight());

        // Menambahkan angka pada sumbu X dan Y
        g2d.setFont(new Font("Arial", Font.PLAIN, 12));
        
        // Menambahkan angka pada sumbu X dari -10 hingga 10
        for (int i = -10; i <= 10; i++) {
            // Sumbu X
            g2d.drawString(String.valueOf(i), centerX + i * 20 - 5, centerY + 15);
            // Sumbu Y
            g2d.drawString(String.valueOf(i), centerX - 25, centerY - i * 20 + 5);
        }

        // Mengatur warna untuk lingkaran
        g2d.setColor(Color.BLUE);

        // Jari-jari lingkaran
        int r = 6 * 20; // Mengalikan dengan faktor skala agar terlihat lebih besar

        // Menggambar lingkaran
        g2d.drawOval(centerX - r, centerY - r, 2 * r, 2 * r);

        // Menggambar titik-titik di kuadran pertama
        g2d.setColor(Color.RED);
        for (int x = 0; x <= 6; x++) {
            int y = (int) Math.sqrt(r * r - x * x); // Menghitung y
            g2d.fillOval(centerX + x * 20 - 2, centerY - y * 20 - 2, 4, 4); // Menggambar titik
        }

        // Menambahkan koordinat titik
        g2d.setColor(Color.BLACK);
        for (int x = 0; x <= 6; x++) {
            int y = (int) Math.sqrt(r * r - x * x);
            g2d.drawString("(" + x + ", " + y + ")", centerX + x * 20 + 5, centerY - y * 20);
        }
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Gambar Lingkaran");
        GambarLingkaran panel = new GambarLingkaran();
        frame.add(panel);
        frame.setSize(800, 600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
