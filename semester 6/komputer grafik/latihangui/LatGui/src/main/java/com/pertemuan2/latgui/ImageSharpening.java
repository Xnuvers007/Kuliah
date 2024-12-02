package com.pertemuan2.latgui;

// import java.awt.*;
import java.awt.image.*;
import javax.imageio.ImageIO;
import java.io.*;
import javax.swing.*;
import java.util.Arrays;

/*
Basic Sharpening: Menggunakan kernel 3x3 untuk meningkatkan ketajaman gambar.
Strong Sharpening: Menggunakan kernel 5x5 untuk meningkatkan ketajaman dengan intensitas lebih besar.
Laplacian Sharpening: Menggunakan kernel Laplacian untuk menonjolkan tepi.
Unsharp Masking: Menggunakan blur dan mengurangkan gambar blur dari gambar asli untuk meningkatkan detail.
Sobel Sharpening: Menggunakan deteksi tepi Sobel untuk meningkatkan kontras di sekitar tepi objek.
LoG Sharpening: Menggunakan kernel Laplacian of Gaussian (LoG) untuk menggabungkan deteksi tepi dan smoothing.
Wavelet Sharpening: Menggunakan transformasi wavelet untuk meningkatkan ketajaman gambar dengan memisahkan detail dari informasi rendah.
Median Sharpening: Menggunakan filter median untuk mengurangi noise dan meningkatkan ketajaman.
Gaussian Blur: Menggunakan kernel Gaussian untuk mengurangi noise dan memperhalus gambar.
*/

public class ImageSharpening {

    public static void main(String[] args) throws Exception {
        // Muat gambar dari file
        BufferedImage img = ImageIO.read(new File("src\\main\\java\\com\\pertemuan2\\latgui\\contoh1.jpg"));

        // Terapkan teknik-teknik sharpening
        BufferedImage basicSharpening = applyBasicSharpening(img);
        BufferedImage strongSharpening = applyStrongSharpening(img);
        BufferedImage laplacianSharpening = applyLaplacianSharpening(img);
        BufferedImage unsharpMasking = applyUnsharpMasking(img);
        BufferedImage sobelSharpening = applySobelSharpening(img);
        BufferedImage logSharpening = applyLoGSharpening(img);
        BufferedImage waveletSharpening = applyWaveletSharpening(img);
        BufferedImage medianSharpening = applyMedianSharpening(img);

        // Menampilkan hasil pada jendela terpisah
        displayImage("Basic Sharpening", basicSharpening);
        displayImage("Strong Sharpening", strongSharpening);
        displayImage("Laplacian Sharpening", laplacianSharpening);
        displayImage("Unsharp Masking", unsharpMasking);
        displayImage("Gaussian Blur", applyGaussianBlur(img));
        displayImage("Sobel Sharpening", sobelSharpening);
        displayImage("LoG Sharpening", logSharpening);
        displayImage("Wavelet Sharpening", waveletSharpening);
        displayImage("Median Sharpening", medianSharpening);
        displayImage("Original Image", img);
    }

    // 1. Basic Sharpening (Kernel 3x3)
    private static BufferedImage applyBasicSharpening(BufferedImage img) {
        float[] matrix = {
            -1, -1, -1,
            -1, 9, -1,
            -1, -1, -1
        };
        Kernel kernel = new Kernel(3, 3, matrix);
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);
    }

    // 2. Strong Sharpening (Kernel 5x5)
    private static BufferedImage applyStrongSharpening(BufferedImage img) {
        float[] matrix = {
            0, -1, -1, -1, 0,
            -1,  2,  2,  2, -1,
            -1,  2,  8,  2, -1,
            -1,  2,  2,  2, -1,
            0, -1, -1, -1, 0
        };
        Kernel kernel = new Kernel(5, 5, matrix);
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);
    }

    // 3. Laplacian Sharpening
    private static BufferedImage applyLaplacianSharpening(BufferedImage img) {
        float[] matrix = {
            0, -1,  0,
            -1,  4, -1,
            0, -1,  0
        };
        Kernel kernel = new Kernel(3, 3, matrix);
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);
    }

    // 4. Unsharp Masking
    private static BufferedImage applyUnsharpMasking(BufferedImage img) {
        BufferedImage blurred = applyGaussianBlur(img);
        return subtractImages(img, blurred);
    }

    private static BufferedImage subtractImages(BufferedImage img1, BufferedImage img2) {
        int width = img1.getWidth();
        int height = img1.getHeight();
        BufferedImage result = new BufferedImage(width, height, img1.getType());
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int rgb1 = img1.getRGB(x, y);
                int rgb2 = img2.getRGB(x, y);
                int r = Math.min(255, Math.max(0, ((rgb1 >> 16) & 0xFF) - ((rgb2 >> 16) & 0xFF)));
                int g = Math.min(255, Math.max(0, ((rgb1 >> 8) & 0xFF) - ((rgb2 >> 8) & 0xFF)));
                int b = Math.min(255, Math.max(0, (rgb1 & 0xFF) - (rgb2 & 0xFF)));
                result.setRGB(x, y, (r << 16) | (g << 8) | b);
            }
        }
        return result;
    }

    private static BufferedImage applyGaussianBlur(BufferedImage img) {
        float[] matrix = {
            1 / 16f, 2 / 16f, 1 / 16f,
            2 / 16f, 4 / 16f, 2 / 16f,
            1 / 16f, 2 / 16f, 1 / 16f
        };
        Kernel kernel = new Kernel(3, 3, matrix);
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);
    }

    // 5. Sobel Edge Detection for Sharpening
    private static BufferedImage applySobelSharpening(BufferedImage img) {
        float[] matrixX = {
            -1, 0, 1,
            -2, 0, 2,
            -1, 0, 1
        };
        float[] matrixY = {
            1, 2, 1,
            0, 0, 0,
            -1, -2, -1
        };
        
        Kernel kernelX = new Kernel(3, 3, matrixX);
        Kernel kernelY = new Kernel(3, 3, matrixY);
        
        ConvolveOp convolveOpX = new ConvolveOp(kernelX);
        ConvolveOp convolveOpY = new ConvolveOp(kernelY);
        
        BufferedImage edgeX = convolveOpX.filter(img, null);
        BufferedImage edgeY = convolveOpY.filter(img, null);
        
        return combineEdges(edgeX, edgeY);
    }

    private static BufferedImage combineEdges(BufferedImage edgeX, BufferedImage edgeY) {
        int width = edgeX.getWidth();
        int height = edgeX.getHeight();
        BufferedImage result = new BufferedImage(width, height, edgeX.getType());
        
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int rgbX = edgeX.getRGB(x, y);
                int rgbY = edgeY.getRGB(x, y);
                
                int r = Math.min(255, Math.abs((rgbX >> 16) & 0xFF) + Math.abs((rgbY >> 16) & 0xFF));
                int g = Math.min(255, Math.abs((rgbX >> 8) & 0xFF) + Math.abs((rgbY >> 8) & 0xFF));
                int b = Math.min(255, Math.abs(rgbX & 0xFF) + Math.abs(rgbY & 0xFF));
                
                result.setRGB(x, y, (r << 16) | (g << 8) | b);
            }
        }
        return result;
    }

    // 6. Laplacian of Gaussian (LoG)
    private static BufferedImage applyLoGSharpening(BufferedImage img) {
        float[] matrix = {
            0,  0, -1,  0,  0,
            0, -1, -2, -1,  0,
            -1, -2, 16, -2, -1,
            0, -1, -2, -1,  0,
            0,  0, -1,  0,  0
        };
        Kernel kernel = new Kernel(5, 5, matrix);
        ConvolveOp convolveOp = new ConvolveOp(kernel);
        return convolveOp.filter(img, null);
    }

    // 7. Wavelet Sharpening
    private static BufferedImage applyWaveletSharpening(BufferedImage img) {
        // Implementasi wavelet untuk meningkatkan ketajaman gambar
        // Menggunakan transformasi wavelet untuk memisahkan detail dari informasi rendah
        // Placeholder: implementasi lebih lanjut diperlukan
        return img;  // Kembalikan gambar asli sebagai placeholder
    }

    // 8. Median Sharpening
    private static BufferedImage applyMedianSharpening(BufferedImage img) {
        BufferedImage medianFiltered = applyMedianFilter(img);
        return subtractImages(img, medianFiltered);
    }

    private static BufferedImage applyMedianFilter(BufferedImage img) {
        int width = img.getWidth();
        int height = img.getHeight();
        BufferedImage result = new BufferedImage(width, height, img.getType());
        
        for (int y = 1; y < height - 1; y++) {
            for (int x = 1; x < width - 1; x++) {
                int[] pixels = new int[9];
                int index = 0;
                
                for (int j = -1; j <= 1; j++) {
                    for (int i = -1; i <= 1; i++) {
                        pixels[index++] = img.getRGB(x + i, y + j);
                    }
                }
                
                Arrays.sort(pixels);
                result.setRGB(x, y, pixels[4]);  // Median value
            }
        }
        return result;
    }

    // Menampilkan gambar pada jendela terpisah
    private static void displayImage(String title, BufferedImage img) {
        JFrame frame = new JFrame(title);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.getContentPane().add(new JLabel(new ImageIcon(img)));
        frame.pack();
        frame.setVisible(true);
    }
}
