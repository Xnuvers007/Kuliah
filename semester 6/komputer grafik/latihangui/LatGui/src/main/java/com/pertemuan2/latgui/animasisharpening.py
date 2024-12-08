import cv2
import numpy as np
import matplotlib.pyplot as plt
from matplotlib.animation import FuncAnimation

# Membaca gambar yang akan diproses
image = cv2.imread(r'src\main\java\com\pertemuan2\latgui\contoh1.jpg')  # Ganti dengan path gambar Anda

# Membuat kernel penajaman dasar (alat untuk menajamkan gambar)
base_kernel = np.array([[0, -1, 0], 
                        [-1, 5, -1], 
                        [0, -1, 0]])
"""
`base_kernel` adalah pola yang digunakan untuk mengubah gambar. 
Pola ini menambah kontras antara bagian tengah gambar dan sekitarnya, 
yang membuat gambar terlihat lebih tajam.
"""

# Fungsi untuk menajamkan gambar
def sharpen_image(image, scale):
    """
    Fungsi ini akan menajamkan gambar menggunakan pola penajaman.
    
    Parameters:
    - image: Gambar yang akan diproses.
    - scale: Angka yang menentukan seberapa tajam gambar yang ingin dibuat. 
             Semakin besar angka, semakin tajam gambar.
    
    Returns:
    - Gambar yang sudah ditajamkan.
    """
    # Mengubah pola penajaman sesuai dengan angka skala
    kernel = base_kernel * scale
    # Menerapkan pola penajaman pada gambar
    return cv2.filter2D(image, -1, kernel)

# Menyiapkan tempat untuk menampilkan gambar dalam animasi
fig, ax = plt.subplots(figsize=(10, 5))
ax.axis('off')  # Menonaktifkan sumbu agar gambar tampil lebih bersih

# Menampilkan gambar pertama kali sebelum ditajamkan
img_display = ax.imshow(cv2.cvtColor(image, cv2.COLOR_BGR2RGB))
"""
Menampilkan gambar asli yang belum ditajamkan dengan konversi warna dari BGR ke RGB
agar tampil dengan benar di matplotlib.
"""

# Fungsi untuk memperbarui gambar setiap kali animasi berjalan
def update(frame):
    """
    Fungsi ini dipanggil setiap kali animasi berjalan. 
    Gambar akan diperbarui dengan penajaman yang semakin kuat.
    
    Parameter:
    - frame: Nomor frame yang menentukan seberapa tajam gambar pada saat itu.
    
    Returns:
    - Gambar yang diperbarui (ditajamkan) untuk ditampilkan di animasi.
    """
    # Menajamkan gambar berdasarkan nomor frame
    sharpened = sharpen_image(image, frame / 10)  # Skala penajaman bertambah seiring bertambahnya frame
    # Memperbarui gambar yang ditampilkan
    img_display.set_data(cv2.cvtColor(sharpened, cv2.COLOR_BGR2RGB))
    return [img_display]

# Membuat animasi yang memperbarui gambar secara bertahap
ani = FuncAnimation(fig, update, frames=np.arange(1, 22), blit=True)
"""
`FuncAnimation` membuat animasi dengan memperbarui gambar setiap kali frame berubah.
- `frames=np.arange(1, 22)`: Membuat urutan angka dari 1 sampai 21 untuk menentukan jumlah frame.
- `blit=True`: Memperbarui hanya bagian gambar yang berubah, membuat animasi lebih cepat.
"""

# Menambahkan judul pada animasi
plt.title('Animasi Penajaman Gambar')

# Menampilkan animasi
plt.show()
"""
Menampilkan animasi yang telah dibuat. Gambar akan berubah secara bertahap
menjadi lebih tajam seiring dengan berjalannya animasi.
"""
