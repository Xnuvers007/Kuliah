package com.pertemuan2.latgui;

import java.awt.*;
import java.awt.geom.GeneralPath;
import javax.swing.*;

public class BuatPoligons2 extends JPanel {
    public BuatPoligons2() {
        this.setPreferredSize(new Dimension(400, 150));
        this.setBackground(Color.WHITE);
    }

    @Override
    public void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2 = (Graphics2D) g;

        // Menyiapkan gradient paint yang sama untuk panah dan general path
        GradientPaint coklatKuning = new GradientPaint(5, 10, new Color(186, 23, 26), 10, 5, Color.YELLOW, true);
        g2.setPaint(coklatKuning);

        // Membuat polygon (panah)
        Polygon panah = new Polygon();
        panah.addPoint(50, 100);
        panah.addPoint(100, 100);
        panah.addPoint(100, 75);
        panah.addPoint(150, 125);
        panah.addPoint(100, 175);
        panah.addPoint(100, 150);
        panah.addPoint(50, 150);

        // Mengisi panah dengan gradien
        g2.fill(panah); // Mengisi panah

        // Membuat dan mengisi bentuk menggunakan GeneralPath
        GeneralPath gp = new GeneralPath();
        gp.moveTo(160, 120);
        gp.lineTo(180, 120);
        gp.quadTo(190, 140, 200, 120);
        gp.lineTo(260, 120);
        gp.quadTo(270, 140, 280, 120);
        gp.lineTo(300, 120);
        gp.curveTo(295, 100, 300, 80, 260, 80);
        gp.lineTo(210, 80);
        gp.lineTo(190, 100);
        gp.lineTo(160, 100);
        gp.closePath(); // Menutup jalur

        // Menggunakan warna yang sama untuk general path
        g2.setPaint(coklatKuning); // Menggunakan gradien yang sama
        g2.fill(gp); // Mengisi general path
    }
}
