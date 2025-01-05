//package com.mycompany.komputergrafik;
package com.pertemuan2.latgui;

import java.awt.*;
import java.awt.geom.CubicCurve2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.Point2D;
import java.awt.geom.QuadCurve2D;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RoundRectangle2D;

import javax.swing.*;

import java.awt.Color;
import java.awt.Dimension;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.geom.CubicCurve2D;
import java.awt.geom.Ellipse2D;
import java.awt.geom.Line2D;
import java.awt.geom.Point2D;
import java.awt.geom.QuadCurve2D;
import java.awt.geom.Rectangle2D;
import java.awt.geom.RoundRectangle2D;
import javax.swing.JPanel;

/**
 *
 * @author Luckysora007
 */
public class LatihanGaris extends JPanel{
    public LatihanGaris(){
        this.setPreferredSize(new Dimension(400, 150));
        this.setBackground(Color.ORANGE);
    }
    
    /**
     *
     * @param g
     */
    @Override
// pertemuan 2
//  public void paintComponent(Graphics g){
//  //paintcomponentdengandefaultmethod
//  super.paintComponent(g);
// 
// Graphics2D g2=(Graphics2D)g;
// g2.drawRect(10,10,40,50);
// g2.drawString("Komputer Grafik Latihan1",10,70);
// }

// pertemuan 3
//   public void paintComponent(Graphics g){
//       super.paintComponent(g);
//       Graphics2D g2 = (Graphics2D) g;
//       g2.drawLine(10, 10, 10, 100);
//       Point2D titik1 = new Point2D.Double(10,10);
//       Point2D titik2 = new Point2D.Double(100,10);
//       Line2D garis2 = new Line2D.Double(titik1, titik2);
//       g2.draw(garis2);
//   }

//pertemuan 4
// KURVA, KUBIK, LINGKARAN WAJIB
    public void paintComponent(Graphics g){
        super.paintComponent (g);
        Graphics2D g2 = (Graphics2D) g;

        g2.setColor(Color.RED);

        Point2D.Double titik1 = new Point2D.Double(30, 10);
        Point2D.Double titik2 = new Point2D.Double(30, 110);
        Line2D.Double garis1 = new Line2D.Double(titik1, titik2);
        g2.draw(garis1);

        g2.drawLine(30, 110, 130, 110);
        g2.drawLine(30, 10, 130, 110);

        QuadCurve2D kurva1 = new QuadCurve2D.Double();
        kurva1.setCurve(130, 10, 180, 100, 230, 10);
        g2.draw(kurva1);

        CubicCurve2D kurva2 = new CubicCurve2D.Double();
        kurva2.setCurve(130, 60, 180, 160, 230, 60, 280, 120);
        g2.fill(kurva2);

        Rectangle2D kotak1 = new Rectangle2D.Double(280, 10, 100, 100);
        g2.draw(kotak1);

        g2.drawRect(280, 120, 100, 50);

        RoundRectangle2D kotak2 = new RoundRectangle2D.Double();
        kotak2.setRoundRect(230, 200, 100, 100, 30, 30);
        g2.draw(kotak2);

        g2.fill(new Ellipse2D.Double(10,120,100,100));
    }

 }
