package com.pertemuan2.latgui;

import java.awt.*;
import javax.swing.*;

/**
 *
 * @author Luckysora007
 */
public class LatGui {

    public static void main(String[] args) {
//        System.out.println("Hello World!");
        JFrame frame = new JFrame();
        frame.setTitle("Aplikasi Pertama - Indra Dwi Aryadi");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        MainPanel panel = new MainPanel();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setVisible(true);
    }
}
