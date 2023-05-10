def hitung_determinan_3x3(matriks):
    a = matriks[0][0]
    b = matriks[0][1]
    c = matriks[0][2]
    d = matriks[1][0]
    e = matriks[1][1]
    f = matriks[1][2]
    g = matriks[2][0]
    h = matriks[2][1]
    i = matriks[2][2]
    determinan = (a * e * i) + (b * f * g) + (c * d * h) - (c * e * g) - (b * d * i) - (a * f * h)
    return determinan

def hitung_determinan_2x2(matriks):
    a = matriks[0][0]
    b = matriks[0][1]
    c = matriks[1][0]
    d = matriks[1][1]
    determinan = (a * d) - (b * c)
    return determinan

# Meminta pengguna untuk memilih ordo matriks
print("Pilih ordo matriks:")
print("1. 2x2")
print("2. 3x3")
choice = int(input("Masukkan pilihan (1/2): "))

if choice == 1:
    # Meminta pengguna untuk memasukkan elemen-elemen matriks 2x2
    print("Masukkan elemen-elemen matriks 2x2:")
    matriks_2x2 = []
    for i in range(2):
        row = []
        for j in range(2):
            elemen = int(input(f"Masukkan elemen matriks pada baris {i+1} dan kolom {j+1}: "))
            row.append(elemen)
        matriks_2x2.append(row)

    # Menghitung determinan matriks 2x2
    hasil_determinan = hitung_determinan_2x2(matriks_2x2)

    # Menampilkan hasil determinan
    print("Determinan matriks 2x2:")
    print(hasil_determinan)
elif choice == 2:
    # Meminta pengguna untuk memasukkan elemen-elemen matriks 3x3
    print("Masukkan elemen-elemen matriks 3x3:")
    matriks_3x3 = []
    for i in range(3):
        row = []
        for j in range(3):
            elemen = int(input(f"Masukkan elemen matriks pada baris {i+1} dan kolom {j+1}: "))
            row.append(elemen)
        matriks_3x3.append(row)

    # Menghitung determinan matriks 3x3
    hasil_determinan = hitung_determinan_3x3(matriks_3x3)

    # Menampilkan hasil determinan
    print("Determinan matriks 3x3:")
    print(hasil_determinan)
else:
    print("Pilihan tidak valid")
