package elearning.IndraDwiAryadi.tugaspertemuan7;

import java.awt.*;
import javax.swing.*;

/**
 *
 * @author Luckysora007
 */
public class Tugaspertemuan7 {

    public static void main(String[] args) {
//        System.out.println("Hello World!");
        JFrame frame = new JFrame();
        frame.setTitle("Aplikasi Pertama - Indra Dwi Aryadi");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
//        MainPanel panel = new MainPanel();
        // NamaFilenya panel = new Nma();
        ObjekGambar panel = new ObjekGambar();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

}
