package elearning.tugaspertemuan5.komputergrafik;

import java.awt.*;
import javax.swing.*;

public class GambarMobil extends JPanel {

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        g2d.setColor(Color.WHITE);
        g2d.fillRect(0, 0, getWidth(), getHeight());

        g2d.setColor(Color.RED);
        g2d.fillRoundRect(200, 250, 200, 50, 20, 20);
        g2d.fillRoundRect(250, 220, 100, 40, 15, 15);

        g2d.setColor(Color.BLACK);
        g2d.fillOval(220, 300, 30, 30);
        g2d.fillOval(350, 300, 30, 30);

        g2d.setColor(Color.CYAN);
        g2d.fillRoundRect(260, 230, 80, 20, 10, 10);
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Gambar Mobil");
        GambarMobil panel = new GambarMobil();
        frame.add(panel);
        frame.setSize(600, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}
