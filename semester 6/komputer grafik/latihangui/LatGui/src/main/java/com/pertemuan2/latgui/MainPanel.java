package com.pertemuan2.latgui;

import java.awt.*;
import java.awt.geom.Line2D;
import java.awt.geom.Point2D;
import javax.swing.*;
/**
 *
 * @author Luckysora007
 */
public class MainPanel extends JPanel{
    public MainPanel(){
        this.setPreferredSize(new Dimension(400, 150));
        this.setBackground(Color.ORANGE);
    }
    
    /**
     *
     * @param g
     */
    @Override
//  public void paintComponent(Graphics g){
//  //paintcomponentdengandefaultmethod
//  super.paintComponent(g);
// 
// Graphics2D g2=(Graphics2D)g;
// g2.drawRect(10,10,40,50);
// g2.drawString("Komputer Grafik Latihan1",10,70);
// }
  public void paintComponent(Graphics g){
      super.paintComponent(g);
      Graphics2D g2 = (Graphics2D) g;
      g2.drawLine(10, 10, 10, 100);
      Point2D titik1 = new Point2D.Double(10,10);
      Point2D titik2 = new Point2D.Double(100,10);
      Line2D garis2 = new Line2D.Double(titik1, titik2);
      g2.draw(garis2);
  }
 }
