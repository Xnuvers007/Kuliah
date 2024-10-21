package elearning.IndraDwiAryadi.tugaspertemuan7;

import java.awt.*;
import java.awt.geom.GeneralPath;
import javax.swing.*;

public class ObjekGambar extends JPanel {
    public ObjekGambar() {
        setPreferredSize(new Dimension(400, 400));
    }

    @Override
    protected void paintComponent(Graphics g) {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        // Mengatur anti-aliasing untuk garis yang lebih halus
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);

        // Menggambar rumah
        drawHouse(g2d);
    }

    private void drawHouse(Graphics2D g2d) {
        GeneralPath body = new GeneralPath();
        body.moveTo(150, 300);
        body.lineTo(260, 300);
        body.lineTo(260, 200);
        body.lineTo(150, 200);
        body.closePath();
    
        GradientPaint bodyPaint = new GradientPaint(150, 200, Color.YELLOW, 250, 300, Color.ORANGE);
        g2d.setPaint(bodyPaint);
        g2d.fill(body);
    
        GeneralPath roof = new GeneralPath();
        roof.moveTo(150, 200);
        roof.lineTo(210, 150);
        roof.lineTo(260, 200);
        roof.closePath();
    
        GradientPaint roofPaint = new GradientPaint(150, 150, Color.RED, 250, 200, Color.DARK_GRAY);
        g2d.setPaint(roofPaint);
        g2d.fill(roof);
    
        Rectangle window = new Rectangle(180, 220, 40, 40);
        g2d.setColor(Color.BLUE);
        g2d.fill(window);
    
        Rectangle door = new Rectangle(230, 260, 30, 40);
        g2d.setColor(new Color(139, 69, 19));
        g2d.fill(door);
    }
    
}
