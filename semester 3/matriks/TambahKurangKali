import numpy as np

def penjumlahan():
    # Penjumlahan Matriks
    baris = int(input("Masukkan jumlah baris: "))
    kolom = int(input("Masukkan jumlah kolom: "))
    matriks1 = np.zeros((baris, kolom))
    matriks2 = np.zeros((baris, kolom))

    print("Masukkan elemen matriks pertama: ")
    for i in range(baris):
        for j in range(kolom):
            matriks1[i][j] = int(input("Masukkan elemen matriks: "))
    print(np.array2string(matriks1, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

    print("Masukkan elemen matriks kedua: ")
    for i in range(baris):
        for j in range(kolom):
            matriks2[i][j] = int(input("Masukkan elemen matriks: "))
    print(np.array2string(matriks2, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

    hasil = np.zeros((baris, kolom))
    for i in range(baris):
        for j in range(kolom):
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]
    print("\nHasilnya adalah\n", np.array2string(hasil, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

def pengurangan():
    # Pengurangan Matriks
    baris = int(input("Masukkan jumlah baris: "))
    kolom = int(input("Masukkan jumlah kolom: "))
    matriks1 = np.zeros((baris, kolom))
    matriks2 = np.zeros((baris, kolom))

    print("Masukkan elemen matriks pertama: ")
    for i in range(baris):
        for j in range(kolom):
            matriks1[i][j] = int(input("Masukkan elemen matriks: "))
    print(np.array2string(matriks1, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

    print("Masukkan elemen matriks kedua: ")
    for i in range(baris):
        for j in range(kolom):
            matriks2[i][j] = int(input("Masukkan elemen matriks: "))
    print(np.array2string(matriks2, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

    hasil = np.zeros((baris, kolom))
    for i in range(baris):
        for j in range(kolom):
            hasil[i][j] = matriks1[i][j] - matriks2[i][j]
    print("\nHasilnya adalah\n", np.array2string(hasil, separator=', ', formatter={'float_kind':lambda x: "%.0f" % x}))

def perkalian():
    # Perkalian Matriks
    baris1 = int(input("Masukkan jumlah baris matriks pertama: "))
    kolom1 = int(input("Masukkan jumlah kolom matriks pertama: "))
    baris2 = int(input("Masukkan jumlah baris matriks kedua: "))
    kolom2 = int(input("Masukkan jumlah kolom matriks kedua: "))

    if kolom1 != baris2:
        print("Jumlah kolom matriks pertama harus sama dengan jumlah baris matriks kedua.")
        return

    matriks1 = np.zeros((baris1, kolom1))
    matriks2 = np.zeros((baris2, kolom2))

    print("Masukkan elemen matriks pertama:")
    for i in range(baris1):
        for j in range(kolom1):
            matriks1[i][j] = int(input("Masukkan elemen matriks: "))

    print("Masukkan elemen matriks kedua:")
    for i in range(baris2):
        for j in range(kolom2):
            matriks2[i][j] = int(input("Masukkan elemen matriks: "))

    print("\nMatriks pertama:\n", np.array2string(matriks1, separator=', ', formatter={'float_kind': lambda x: "%.0f" % x}))
    print("\nMatriks kedua:\n", np.array2string(matriks2, separator=', ', formatter={'float_kind': lambda x: "%.0f" % x}))

    hasil = np.dot(matriks1, matriks2)
    print("\nHasil perkalian matriks:\n", np.array2string(hasil, separator=', ', formatter={'float_kind': lambda x: "%.0f" % x}))

if __name__ == "__main__":
    print("Selamat datang di program penjumlahan, pengurangan, dan perkalian matriks!")
    print("Pilih operasi yang ingin dilakukan:")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Keluar")
    pilihan = int(input("Masukkan pilihan: "))
    if pilihan == 1:
        penjumlahan()
    elif pilihan == 2:
        pengurangan()
    elif pilihan == 3:
        perkalian()
    elif pilihan == 4:
        exit()
    else:
        print("Pilihan tidak valid!")
