def sequential_search(data, target):
    count = 0
    positions = []
    for i, num in enumerate(data):
        if num == target:
            count += 1
            positions.append(i + 1)
    return count, positions

# Fungsi sequential_search melakukan pencarian data secara sequential (linier) dengan memeriksa setiap elemen dalam list data.
# Jika elemen sama dengan target, count (jumlah kemunculan) akan bertambah 1 dan posisi akan ditambahkan ke dalam list positions.
# Fungsi ini mengembalikan jumlah kemunculan dan posisi-posisi tempat ditemukannya target.

def interpolation_search_all(data, target):
    left = 0
    right = len(data) - 1
    positions = []
    
    while left <= right and data[left] <= target <= data[right]:
        pos = left + int(((right - left) / (data[right] - data[left])) * (target - data[left]))
        
        if data[pos] == target:
            positions.append(pos + 1)
            i = pos - 1
            while i >= 0 and data[i] == target:
                positions.append(i + 1)
                i -= 1
            i = pos + 1
            while i < len(data) and data[i] == target:
                positions.append(i + 1)
                i += 1
            return positions
        elif data[pos] < target:
            left = pos + 1
        else:
            right = pos - 1
    return positions

# Fungsi interpolation_search_all melakukan pencarian data menggunakan metode interpolation search.
# Algoritma ini bekerja dengan mengasumsikan data yang diurutkan secara ascending.
# Pertama, mencari posisi perkiraan target berdasarkan perhitungan proporsional antara left, right, dan nilai target.
# Jika data pada posisi tersebut sama dengan target, posisi ditambahkan ke dalam list positions.
# Kemudian, pencarian dilakukan di sekitar posisi tersebut untuk mencari posisi-posisi lain yang juga memiliki nilai target.
# Fungsi ini mengembalikan posisi-posisi tempat ditemukannya target.

def binary_search(data, target):
    left = 0
    right = len(data) - 1
    positions = []
    
    while left <= right:
        mid = left + (right - left) // 2
        
        if data[mid] == target:
            positions.append(mid + 1)
            i = mid - 1
            while i >= 0 and data[i] == target:
                positions.append(i + 1)
                i -= 1
            i = mid + 1
            while i < len(data) and data[i] == target:
                positions.append(i + 1)
                i += 1
            return len(positions), positions
        elif data[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return 0, []

# Fungsi binary_search melakukan pencarian data menggunakan metode binary search.
# Algoritma ini juga mengasumsikan data yang diurutkan secara ascending.
# Pertama, menentukan posisi tengah (mid) dan membandingkan data[mid] dengan target.
# Jika data[mid] sama dengan target, posisi ditambahkan ke dalam list positions.
# Selanjutnya, melakukan pencarian di sekitar posisi tersebut untuk mencari posisi-posisi lain yang juga memiliki nilai target.
# Fungsi ini mengembalikan jumlah kemunculan dan posisi-posisi tempat ditemukannya target.

def counting(data, target):
    count = data.count(target)
    positions = [i + 1 for i, num in enumerate(data) if num == target]
    return count, positions

# Fungsi counting menghitung jumlah kemunculan dan posisi-posisi tempat ditemukannya target dalam list data.
# Menggunakan metode count untuk menghitung jumlah kemunculan secara langsung.
# Selain itu, menggunakan list comprehension untuk mencatat posisi-posisi tempat ditemukannya target.
# Fungsi ini mengembalikan jumlah kemunculan dan posisi-posisi tempat ditemukannya target.

data = [34, 8, 50, 74, 87, 90, 12, 25, 20, 30, 35, 45, 40, 22, 29, 72, 60, 55, 53, 12, 32, 12, 41, 12]
data_cari = [12, 15, 37]

# List data adalah data acak yang digunakan untuk pencarian.
# List data_cari berisi elemen-elemen yang akan dicari dalam list data.

print(f"\nData Acak: {data}\n")

# Mencetak list data acak.

data_sorted = sorted(data)
print(f"Data Terurut: {data_sorted}\n")

# Melakukan pengurutan pada list data secara ascending dan menyimpannya dalam variabel data_sorted.

for item in data_cari:
    jumlah_sequential, positions_sequential = sequential_search(data, item)
    if jumlah_sequential > 0:
        print(f"Metode Sequential Search: Data {item} ditemukan sebanyak {jumlah_sequential} kali pada posisi {positions_sequential}")
    else:
        print(f"Metode Sequential Search: Data {item} tidak ditemukan.")

    jumlah_binary, positions_binary = binary_search(data_sorted, item)
    if jumlah_binary > 0:
        print(f"Metode Binary Search: Data {item} ditemukan sebanyak {jumlah_binary} kali pada posisi {positions_binary}")
    else:
        print(f"Metode Binary Search: Data {item} tidak ditemukan.")

    jumlah_counting, positions_counting = counting(data, item)
    if jumlah_counting > 0:
        print(f"Metode Counting: Data {item} ditemukan sebanyak {jumlah_counting} kali pada posisi {positions_counting}")
    else:
        print(f"Metode Counting: Data {item} tidak ditemukan.")

    positions = interpolation_search_all(data_sorted, item)
    if len(positions) > 0:
        print(f"Metode Interpolation Search: Data {item} ditemukan sebanyak {len(positions)} kali pada posisi {positions}")
    else:
        print(f"Metode Interpolation Search: Data {item} tidak ditemukan.")

    print("\n")

# Melakukan pencarian untuk setiap elemen dalam list data_cari menggunakan berbagai metode pencarian.
# Hasil pencarian akan dicetak, termasuk jumlah kemunculan dan posisi-posisi tempat ditemukannya target.
# Metode Sequential Search dan Counting menggunakan data acak, sedangkan Binary Search dan Interpolation Search menggunakan data terurut secara ascending.
