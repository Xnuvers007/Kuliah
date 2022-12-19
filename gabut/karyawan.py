# Buat program menghitung gaji karyawan

print("PT. Gabut 007\n")
nama = str(input("Masukkan nama: "))
golongan = str(input("Masukkan golongan: [A/b] "))
jumlah_jam = int(input("Masukkan jumlah jam kerja: "))
print("Gaji yang diterima: ")

if golongan == "A" or golongan == "a":
    gajipokok = 1200000
    if jumlah_jam >= 50:
        gajilembur = 5000 * (jumlah_jam - 50)
        gajiperjam = 6000
        gaji2 = gajiperjam * jumlah_jam
        pajak = 0.05 * (gajilembur + gaji2)
        gaji_bersih = gajilembur + gaji2 - pajak
        print("Gaji Pokok: Rp", gajipokok)
        print("Gaji Lembur: Rp", gajilembur)
        print("Pajak: Rp", pajak)
        print("Gaji Bersih: Rp", gaji_bersih)
        gajiasli = gajipokok + gaji_bersih
        print("Gaji Asli: Rp", gajiasli)
    else:
        gajilembur = 0
        gajiperjam = 6000
        totalgajiperjam = gajiperjam * jumlah_jam
        pajak = 0.05 * totalgajiperjam
        gaji_bersih = totalgajiperjam - pajak
        print("Pajak: Rp", pajak)
        print("Gaji Bersih: Rp", gaji_bersih)

elif golongan == "B" or golongan == "b":
    gajipokok = 1500000
    if jumlah_jam >= 50:
        gajilembur = 6000 * (jumlah_jam - 50)
        gajiperjam = 8000
        gaji2 = gajiperjam * jumlah_jam
        pajak = 0.05 * (gajilembur + gaji2)
        gaji_bersih = gajilembur + gaji2 - pajak
        print("Gaji Pokok: Rp", gajipokok)
        print("Gaji Lembur: Rp", gajilembur)
        print("Pajak: Rp", pajak)
        print("Gaji Bersih: Rp", gaji_bersih)
        gajiasli = gajipokok + gaji_bersih
        print("Gaji Asli: Rp", gajiasli)
    else:
        gajilembur = 0
        gajiperjam = 8000
        totalgajiperjam = gajiperjam * jumlah_jam
        pajak = 0.05 * totalgajiperjam
        gaji_bersih = totalgajiperjam - pajak
        print("Tidak ada gaji lembur bagi yang jam kerjanya dibawah 50 jam")
        print("Gaji Pokok: Rp", gajipokok)
        print("Pajak: Rp", pajak)
        print("Gaji Bersih: Rp", gaji_bersih)
    
else:
    print("Golongan yang anda masukkan salah")
