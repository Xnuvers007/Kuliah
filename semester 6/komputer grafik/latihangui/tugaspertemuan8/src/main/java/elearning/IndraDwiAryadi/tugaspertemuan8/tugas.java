package elearning.IndraDwiAryadi.tugaspertemuan8;

import java.awt.*;
import java.awt.geom.*;
import javax.swing.*;

public class tugas extends JPanel {
    public tugas() {
        this.setPreferredSize(new Dimension(800, 400));
        this.setBackground(Color.WHITE);
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
        
        int houseWidth = 110;

        int panelWidth = getWidth();
        
        int x1 = (panelWidth - houseWidth * 3) / 4;
        int y1 = 300;
        
        drawHouse(g2d, x1, y1);
        
        g2d.translate(x1 + 300, 0);
        g2d.rotate(Math.toRadians(45));
        drawHouse(g2d, 120, 280);
        
        g2d.rotate(-Math.toRadians(45));
        g2d.translate(-x1 - 300, 0);
        
        g2d.translate(x1 + 600, 0);
        g2d.rotate(Math.toRadians(180));
        drawHouse(g2d, 100, -160);
//        g2d.rotate(-Math.toRadians(180));
        g2d.rotate(-180);
    }

    private void drawHouse(Graphics2D g2d, int x, int y) {
        GeneralPath body = new GeneralPath();
        body.moveTo(x + 0, y);
        body.lineTo(x + 110, y);
        body.lineTo(x + 110, y - 100);
        body.lineTo(x + 0, y - 100);
        body.closePath();
    
        GradientPaint bodyPaint = new GradientPaint(x, y - 100, Color.YELLOW, x + 110, y, Color.ORANGE);
        g2d.setPaint(bodyPaint);
        g2d.fill(body);
    
        GeneralPath roof = new GeneralPath();
        roof.moveTo(x + 0, y - 100);
        roof.lineTo(x + 55, y - 150);
        roof.lineTo(x + 110, y - 100);
        roof.closePath();
    
        GradientPaint roofPaint = new GradientPaint(x, y - 150, Color.RED, x + 110, y - 100, Color.DARK_GRAY);
        g2d.setPaint(roofPaint);
        g2d.fill(roof);
    
        Rectangle window = new Rectangle(x + 30, y - 80, 40, 40);
        g2d.setColor(Color.BLUE);
        g2d.fill(window);
    
        Rectangle door = new Rectangle(x + 80, y - 40, 30, 40);
        g2d.setColor(new Color(139, 69, 19));
        g2d.fill(door);
    }
}
