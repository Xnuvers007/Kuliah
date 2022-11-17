# Membuat urutan angka segitiga seperti
#        1
#       2 2
#      3 3 3
#     4 4 4 4
#    5 5 5 5 5

# Minta user memasukkan jumlah bar
bar = int(input("Masukkan jumlah bar: "))
# Membuat baris
for i in range(1, bar + 1):
    # Membuat spasi
    for j in range(1, bar - i + 1):
        print(" ", end="")
    # Membuat angka
    for k in range(1, i + 1):
        print(i, end=" ")
    # Pindah ke baris berikutnya
    print()

# if __name__ == "__main__":
#     main()