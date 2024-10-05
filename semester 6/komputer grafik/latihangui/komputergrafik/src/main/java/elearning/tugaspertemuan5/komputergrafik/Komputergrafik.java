package elearning.tugaspertemuan5.komputergrafik;

import java.awt.*;
import javax.swing.*;
/**
 *
 * @author Luckysora007
 */
public class Komputergrafik {

    public static void main(String[] args) {
//        System.out.println("Hello World!");
        JFrame frame = new JFrame();
        frame.setTitle("Aplikasi Pertama - Indra Dwi Aryadi");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        GambarObjek panel = new GambarObjek();
        // NamaFilenya panel = new Nma();
        frame.getContentPane().add(panel);
        frame.pack();
        frame.setSize(800, 600);
        frame.setName("Gambar objek");
        frame.setVisible(true);
    }
}

