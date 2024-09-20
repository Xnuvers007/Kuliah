package com.pertemuan2.latgui;

/**
 *
 * @author Luckysora007
 * @Nyoba aja sebenernya
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.text.SimpleDateFormat;
import java.util.Date;

public class DigitalClock extends JFrame {
    private final JLabel timeLabel;

    public DigitalClock() {
        setTitle("Jam Digital");
        setSize(300, 150);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLayout(new BorderLayout());

        timeLabel = new JLabel();
        timeLabel.setFont(new Font("Arial", Font.PLAIN, 48));
        timeLabel.setHorizontalAlignment(SwingConstants.CENTER);
        add(timeLabel, BorderLayout.CENTER);

        // Timer to update the clock every second
        Timer timer = new Timer(1000, (ActionEvent e) -> {
            updateTime();
        });
        timer.start();

        updateTime(); // Set initial time
    }

    private void updateTime() {
        SimpleDateFormat formatter = new SimpleDateFormat("HH:mm:ss");
        Date date = new Date();
        timeLabel.setText(formatter.format(date));
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            DigitalClock clock = new DigitalClock();
            clock.setVisible(true);
        });
    }
}
