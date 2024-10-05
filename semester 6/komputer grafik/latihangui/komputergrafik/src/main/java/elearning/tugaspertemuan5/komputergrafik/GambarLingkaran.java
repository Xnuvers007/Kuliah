package elearning.tugaspertemuan5.komputergrafik;

import java.awt.*;
import javax.swing.*;

public class GambarLingkaran extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        g2d.setColor(Color.WHITE);
        g2d.fillRect(0, 0, getWidth(), getHeight());

        g2d.setColor(Color.GRAY);
        int centerX = getWidth() / 2;
        int centerY = getHeight() / 2;

        g2d.drawLine(0, centerY, getWidth(), centerY);
        g2d.drawLine(centerX, 0, centerX, getHeight());

        g2d.setFont(new Font("Arial", Font.PLAIN, 12));

        for (int i = -10; i <= 10; i++) {
            g2d.drawString(String.valueOf(i), centerX + i * 20 - 5, centerY + 15);
            g2d.drawString(String.valueOf(i), centerX - 25, centerY - i * 20 + 5);
        }

        g2d.setColor(Color.BLUE);
        int r = 6 * 20;
        g2d.drawOval(centerX - r, centerY - r, 2 * r, 2 * r);

        g2d.setColor(Color.RED);
        for (int x = 0; x <= 6; x++) {
            int y = (int) Math.sqrt(r * r - x * x);
            g2d.fillOval(centerX + x * 20 - 2, centerY - y * 20 - 2, 4, 4);
        }

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
