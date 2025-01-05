package com.pertemuan2.latgui;

import javax.swing.*;
import java.io.*;
import javax.imageio.*;
import java.awt.*;
import java.awt.event.*;
import java.awt.geom.*;
import java.awt.image.*;

// y kalo + maka kebawah
// x kalo + ke kanan
// x kalo - ke kiri
// y kalo - ke atas

public class pertemuan10 extends JPanel {
    public pertemuan10(){
        this.setPreferredSize(new Dimension(700, 410));
        this.setBackground(Color.WHITE);
    }

    public void paintComponent(Graphics g){
        super.paintComponent(g);
        Graphics2D g2 = (Graphics2D) g;

        try {
            BufferedImage img = ImageIO.read(new File("src/main/java/com/pertemuan2/latgui/contoh1.jpg"));
            // Shape lingkaran = new Ellipse2D.Double(30, 30, 250, 250);
            // g2.clip(lingkaran);

            int[] xPoints = {150, 30, 270};
            int[] yPoints = {30, 250, 250};
            Shape segitiga = new Polygon(xPoints, yPoints, 3);
            g2.clip(segitiga);

            g2.drawImage(img, -30, 10, 400, 300, null);
            g2.setClip(null);
            Font theFont = new Font("Arial", Font.BOLD, 20);
            g2.setFont(theFont);
            
            g2.drawString("Clipping: Alya (Anime)", 40, 350);

            // image asli
            g2.drawImage(img, 300, 10, 400, 300, null);
            g2.drawString("Original: Alya (Anime)", 400, 350);
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
