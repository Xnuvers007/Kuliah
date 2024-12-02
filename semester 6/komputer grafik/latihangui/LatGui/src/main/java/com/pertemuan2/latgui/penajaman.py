# Mengimpor pustaka OpenCV dan NumPy untuk pengolahan citra
import cv2  # OpenCV digunakan untuk pengolahan citra dan komputer vision
import numpy as np  # NumPy digunakan untuk operasi numerik, seperti membuat dan mengelola array

# Memuat gambar dari file
image = cv2.imread(r'src\main\java\com\pertemuan2\latgui\contoh1.jpg')  
# Menggunakan fungsi cv2.imread untuk memuat gambar dari jalur file yang ditentukan. 
# Gambar akan disimpan dalam variabel 'image' jika berhasil dimuat.

# Mengecek apakah gambar berhasil dimuat
if image is None:
    image = cv2.imread("contoh1.jpg")  # Coba memuat gambar dari lokasi lain jika yang pertama gagal
    if image is None:  # Jika gambar masih tidak dapat dimuat, beri pesan error
        print("Gagal memuat gambar. Periksa jalur file atau integritas file.")
        exit()  # Keluar dari program jika gambar gagal dimuat
else:
    exit()  # Program keluar jika gambar berhasil dimuat (kode ini seharusnya ada di luar blok if)

# Membuat kernel penajaman
# Kernel ini digunakan untuk meningkatkan ketajaman gambar
kernel_sharpening = np.array([[-1,-1,-1], 
                               [-1,9,-1],    # Angka '9' di pusat memperkuat nilai pusat, '-1' di sekeliling mengurangi kontribusi sekeliling
                               [-1,-1,-1]])  # Matriks kernel penajaman dengan bobot yang diberikan

# Menerapkan kernel penajaman ke gambar yang dimuat
# Fungsi filter2D digunakan untuk menerapkan konvolusi dengan kernel penajaman
# ddepth=-1 menunjukkan bahwa kedalaman gambar output sama dengan gambar input
sharpened = cv2.filter2D(image, ddepth=-1, kernel=kernel_sharpening)
# Filter2D akan menerapkan operasi konvolusi pada gambar dengan kernel yang telah dibuat,
# menghasilkan gambar yang lebih tajam.

# Membuat kernel untuk Gaussian Blur (Blur yang sangat kuat)
# Kernel Gaussian 5x5 untuk Blur yang sangat kuat
kernel_gaussianblur = np.array([[1, 2, 1],    # Bobot kecil untuk piksel di kiri dan kanan pusat
                                [2, 4, 2],    # Bobot lebih besar untuk piksel dekat pusat (2 dan 4)
                                [1, 2, 1]])    # Bobot kecil untuk piksel di bawah kiri dan kanan pusat

# Menambahkan Normalisasi untuk gaussian blur
# Normalisasi dilakukan agar jumlah total nilai kernel = 1, menjaga kecerahan gambar tetap terjaga
kernel_gaussianblur = kernel_gaussianblur / np.sum(kernel_gaussianblur)  
# np.sum(kernel_gaussianblur) = 16, jadi kernel ini dibagi dengan 16 untuk memastikan total bobot adalah 1

# Menerapkan filter Gaussian Blur ke gambar yang dimuat
blurred = cv2.filter2D(image, -1, kernel_gaussianblur)
# Seperti pada konvolusi penajaman, filter2D diterapkan pada gambar dengan kernel Gaussian,
# menghasilkan efek blur yang lebih kuat pada gambar.

# Menampilkan gambar asli
cv2.imshow('Original Image', image)  
# Fungsi imshow digunakan untuk menampilkan gambar. Jendela dengan nama 'Original Image' akan muncul
# berisi gambar asli yang dimuat sebelumnya.

# Menampilkan gambar yang sudah ditajamkan
cv2.imshow('Sharpened Image', sharpened)  
# Menampilkan gambar yang telah mengalami penajaman menggunakan kernel penajaman.

# Menampilkan gambar yang sudah diburamkan dengan Gaussian Blur
cv2.imshow('Gaussian Blurred Image', blurred)  
# Menampilkan gambar yang telah diburamkan menggunakan filter Gaussian.

# Menunggu input dari pengguna sebelum menutup jendela
cv2.waitKey(0)  
# Fungsi waitKey(0) akan menunggu sampai ada input dari pengguna (seperti menekan tombol keyboard).
# Jika ada input, eksekusi program akan berlanjut.

# Menghancurkan semua jendela yang telah dibuat
cv2.destroyAllWindows()  
# Fungsi destroyAllWindows digunakan untuk menutup semua jendela gambar yang telah dibuka oleh imshow.
