package com.pertemuan2.latgui;

import java.awt.*;
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
    public void paintComponent(Graphics g)
    {
        super.paintComponent(g);
        Graphics2D g2 = (Graphics2D)g;
        g2.drawRect(10,10,40,50);
        g2.drawString("Komputer Grafik Latihan 1", 10, 70);
    }
}
