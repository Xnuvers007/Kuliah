# Mengimpor pustaka OpenCV dan NumPy untuk pengolahan citra
import cv2
import numpy as np

# Memuat gambar dari file
image = cv2.imread(r'src\main\java\com\pertemuan2\latgui\contoh1.jpg')

# Mengecek apakah gambar berhasil dimuat
if image is None:
    print("Gambar tidak ditemukan, pastikan path sudah benar.")
    exit()

# Membuat kernel penajaman
# Kernel ini digunakan untuk meningkatkan ketajaman gambar
kernel_sharpening = np.array([[-1,-1,-1], 
                               [-1,9,-1],    # Angka '9' di pusat memperkuat nilai pusat, ' -1 ' di sekeliling mengurangi kontribusi sekeliling
                               [-1,-1,-1]])

# Menerapkan kernel penajaman ke gambar yang dimuat
# Fungsi filter2D digunakan untuk menerapkan konvolusi dengan kernel penajaman
sharpened = cv2.filter2D(image, -1, kernel_sharpening)

# Membuat kernel untuk Gaussian Blur (Blur yang sangat kuat)
# Gaussian Kernel 5x5 untuk Blur yang sangat kuat
kernel_gaussianblur = np.array([[1, 2, 1],    # Bobot kecil untuk piksel di kiri dan kanan pusat (1)
                                [2, 4, 2],    # Bobot lebih besar untuk piksel dekat pusat (2 dan 4)
                                [1, 2, 1]])    # Bobot kecil untuk piksel di bawah kiri dan kanan pusat (1)

# Menambahkan Normalisasi untuk gaussian blur
# Normalisasi dilakukan agar jumlah total nilai kernel = 1, menjaga kecerahan gambar tetap terjaga
kernel_gaussianblur = kernel_gaussianblur / np.sum(kernel_gaussianblur)  # np.sum(kernel_gaussianblur) = 16

# Menerapkan filter Gaussian Blur ke gambar yang dimuat
blurred = cv2.filter2D(image, -1, kernel_gaussianblur)

# Menampilkan gambar asli
cv2.imshow('Original Image', image)

# Menampilkan gambar yang sudah ditajamkan
cv2.imshow('Sharpened Image', sharpened)

# Menampilkan gambar yang sudah diburamkan dengan Gaussian Blur
cv2.imshow('Gaussian Blurred Image', blurred)

# Menunggu input dari pengguna sebelum menutup jendela
cv2.waitKey(0)

# Menghancurkan semua jendela yang telah dibuat
cv2.destroyAllWindows()
