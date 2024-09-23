package com.pertemuan2.latgui;

public class LineDrawing {

    public static void main(String[] args) {
        int x1 = 3, y1 = 2, x2 = 11, y2 = 6;

        System.out.println("Bruteforce Line Drawing:");
        drawLineBruteforce(x1, y1, x2, y2);
        System.out.println();

        System.out.println("DDA Line Drawing:");
        drawLineDDA(x1, y1, x2, y2);
        System.out.println();

        System.out.println("Bresenham Line Drawing:");
        drawLineBresenham(x1, y1, x2, y2);
    }

    // Bruteforce algorithm
    public static void drawLineBruteforce(int x1, int y1, int x2, int y2) {
        for (int x = x1; x <= x2; x++) {
            int y = y1 + (y2 - y1) * (x - x1) / (x2 - x1);
            System.out.println("Pixel: (" + x + ", " + y + ")");
        }
    }

    // DDA algorithm
    public static void drawLineDDA(int x1, int y1, int x2, int y2) {
        int dx = x2 - x1;
        int dy = y2 - y1;
        int steps = Math.abs(dx) > Math.abs(dy) ? Math.abs(dx) : Math.abs(dy);

        float xIncrement = dx / (float) steps;
        float yIncrement = dy / (float) steps;

        float x = x1;
        float y = y1;

        for (int i = 0; i <= steps; i++) {
            System.out.println("Pixel: (" + Math.round(x) + ", " + Math.round(y) + ")");
            x += xIncrement;
            y += yIncrement;
        }
    }

    // Bresenham algorithm
    public static void drawLineBresenham(int x1, int y1, int x2, int y2) {
        int dx = x2 - x1;
        int dy = y2 - y1;
        int sx = (dx > 0) ? 1 : -1;
        int sy = (dy > 0) ? 1 : -1;

        dx = Math.abs(dx);
        dy = Math.abs(dy);

        if (dx > dy) {
            int err = dx / 2;
            while (x1 != x2) {
                System.out.println("Pixel: (" + x1 + ", " + y1 + ")");
                err -= dy;
                if (err < 0) {
                    y1 += sy;
                    err += dx;
                }
                x1 += sx;
            }
        } else {
            int err = dy / 2;
            while (y1 != y2) {
                System.out.println("Pixel: (" + x1 + ", " + y1 + ")");
                err -= dx;
                if (err < 0) {
                    x1 += sx;
                    err += dy;
                }
                y1 += sy;
            }
        }
        System.out.println("Pixel: (" + x2 + ", " + y2 + ")"); // End pixel
    }
}
