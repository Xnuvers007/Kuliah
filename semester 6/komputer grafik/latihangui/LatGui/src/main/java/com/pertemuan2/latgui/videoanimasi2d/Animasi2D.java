package com.pertemuan2.latgui;

import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Animasi2D extends JPanel implements ActionListener {
    private int x = 50, y = 50;
    private int speedX = 2, speedY = 2;

    private int rectX = 150, rectY = 100;
    private int rectSpeedX = 2, rectSpeedY = 2;

    private Timer timer;

    public Animasi2D() {
        setPreferredSize(new Dimension(800, 600));
        setBackground(Color.BLACK);
        timer = new Timer(10, this);
        timer.start();
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);

        g.setColor(Color.WHITE);
        g.drawString("SpeedX: " + speedX, 10, 40);
        g.drawString("SpeedY: " + speedY, 10, 60);
        g.drawString("Ball X: " + x, 10, 80);
        g.drawString("Ball Y: " + y, 10, 100);
        g.drawString("Rect X: " + rectX, 10, 120);
        g.drawString("Rect Y: " + rectY, 10, 140);

        g.setColor(Color.RED);
        g.fillOval(x, y, 50, 50);

        g.setColor(Color.BLUE);
        g.fillRect(rectX, rectY, 50, 50);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        x += speedX;
        y += speedY;

        if (x < 0 || x > getWidth() - 50) {
            speedX = -speedX;
        }
        if (y < 0 || y > getHeight() - 50) {
            speedY = -speedY;
        }

        rectX += rectSpeedX;
        rectY += rectSpeedY;

        if (rectX < 0 || rectX > getWidth() - 50) {
            rectSpeedX = -rectSpeedX;
        }
        if (rectY < 0 || rectY > getHeight() - 50) {
            rectSpeedY = -rectSpeedY;
        }

        if (x + 50 > rectX && x < rectX + 50 && y + 50 > rectY && y < rectY + 50) {
            speedX = -speedX;
            speedY = -speedY;
            
            rectSpeedX = -rectSpeedX;
            rectSpeedY = -rectSpeedY;
        }

        repaint();
    }

    public static void main(String[] args) {
        JFrame frame = new JFrame("Animasi 2D");
        Animasi2D animasi = new Animasi2D();

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.add(animasi);
        frame.pack();
        frame.setVisible(true);
    }
}
