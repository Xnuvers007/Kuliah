package com.pertemuan2.latgui;

import java.awt.*;
import java.awt.geom.GeneralPath;

import javax.swing.*;

public class BuatPoligons extends JPanel {
    public BuatPoligons(){
        this.setPreferredSize(new Dimension(400, 150));
        this.setBackground(Color.WHITE);
    }
        /**
     * garis kurva 
     * @param g
     */
    @Override
    public void paintComponent(Graphics g){
        super.paintComponent (g);
        Graphics2D g2 = (Graphics2D) g;

        // GradientPaint CoklatKuning = new GradientPaint(50, 100, new Color(186, 23, 26), 100, 150, Color.YELLOW); // Color.YELLOW // new Color(255,255,0)
        // g2.setPaint(CoklatKuning);

        GradientPaint CoklatKuning = new GradientPaint(5, 10, new Color(186, 23, 26), 10, 5, Color.YELLOW, true); // Color.YELLOW // new Color(255,255,0)
        g2.setPaint(CoklatKuning);

        // g2.setColor(Color.BLACK);
        Polygon panah = new Polygon();
        panah.addPoint(50,100);
        panah.addPoint(100,100);
        panah.addPoint(100,75);
        panah.addPoint(150,125);
        panah.addPoint(100,175);
        panah.addPoint(100,150);
        panah.addPoint(50,150);
        
        g2.draw(panah);

//        g2.setColor(new Color(128, 64, 0));
        GeneralPath gp = new GeneralPath();
        gp.moveTo(160,120);
        gp.lineTo(180,120);
        gp.quadTo(190,140,200,120);
        gp.lineTo(260,120);
        gp.quadTo(270,140,280,120);
        gp.lineTo(300,120);
        gp.curveTo(295,100,300,80,260,80);
        gp.lineTo(210,80);
        gp.lineTo(190,100);
        gp.lineTo(160,100);
        gp.lineTo(160,120);

        // g2.draw(gp);
        g2.fill(gp);

    }
}
