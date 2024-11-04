package elearning.IndraDwiAryadi.tugaspertemuan8;

import java.awt.*;
import javax.swing.*;

/**
 *
 * @author Luckysora007
 */
public class Tugaspertemuan8 {

    public static void main(String[] args) {
//        System.out.println("Hello World!");
        JFrame frame = new JFrame();
        frame.setTitle("Aplikasi Pertama - Indra Dwi Aryadi");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
//        MainPanel panel = new MainPanel();
        // NamaFilenya panel = new Nma();
        tugas panel = new tugas();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
    }

}
