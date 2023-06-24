def tampil_array(arr):
    for elemen in arr:
        print(elemen, end=" ")
    print()

def bubble_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        tukar = False
        for j in range(n - i - 1):
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                tukar = True
        if not tukar:
            break
        tampil_array(arr)

def insertion_sort(arr):
    n = len(arr)
    for i in range(1, n):
        key = arr[i]
        j = i - 1
        while j >= 0 and arr[j] > key:
            arr[j + 1] = arr[j]
            j = j - 1
        arr[j + 1] = key
        tampil_array(arr)

def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j
        arr[min_index], arr[i] = arr[i], arr[min_index]
        tampil_array(arr)

def binary_search(arr, low, high, cari):
    while low <= high:
        tengah = low + (high - low) // 2
        if arr[tengah] == cari:
            return tengah
        elif arr[tengah] < cari:
            low = tengah + 1
        else:
            high = tengah - 1
    return -1

print("Dikoding oleh\nNama: Indra Dwi Aryadi (xxxxxxxxxx)\nKelas: 03TPLP003")
n = int(input("Masukkan jumlah elemen: "))
tab_int = []
print("Masukkan elemen-elemen array: ")
for _ in range(n):
    elemen = int(input())
    tab_int.append(elemen)

print("Array sebelum diurutkan: ", end="")
tampil_array(tab_int)

bubble_sort_arr = tab_int.copy()
print("Bubble Sort:")
bubble_sort(bubble_sort_arr)

insertion_sort_arr = tab_int.copy()
print("Insertion Sort:")
insertion_sort(insertion_sort_arr)

selection_sort_arr = tab_int.copy()
print("Selection Sort:")
selection_sort(selection_sort_arr)

print("\n\n")
print("Dikoding oleh\nNama: Indra Dwi Aryadi (xxxxxxxx)\nKelas: 03TPLP003")
print("Pencarian Biner:")
cari = int(input("Masukkan angka yang ingin dicari: "))

# Pencarian pada array yang telah diurutkan menggunakan binary search
posisi = binary_search(bubble_sort_arr, 0, n - 1, cari)
if posisi != -1:
    print("Data telah diurutkan dan pencarian biner:")
    print(f"Angka {cari} ditemukan pada indeks ke-{posisi}")
else:
    print(f"Angka {cari} tidak ditemukan")
