class CircularQueue:
    def __init__(self, size):
        self.size = size
        self.queue = [None] * size
        self.front = self.rear = -1

    def enqueue(self, item):
        if (self.rear + 1) % self.size == self.front:
            print("Antrian penuh. Tidak bisa menambahkan item.")
        elif self.front == -1:
            self.front = 0
            self.rear = 0
            self.queue[self.rear] = item
        else:
            self.rear = (self.rear + 1) % self.size
            self.queue[self.rear] = item

    def dequeue(self):
        if self.front == -1:
            print("Antrian kosong. Tidak bisa menghapus item.")
            return None
        elif self.front == self.rear:
            item = self.queue[self.front]
            self.front = -1
            self.rear = -1
            return item
        else:
            item = self.queue[self.front]
            self.front = (self.front + 1) % self.size
            return item

    def display(self):
        if self.front == -1:
            print("Antrian kosong.")
        elif self.rear >= self.front:
            for i in range(self.front, self.rear + 1):
                print(self.queue[i], end=" ")
            print()
        else:
            for i in range(self.front, self.size):
                print(self.queue[i], end=" ")
            for i in range(0, self.rear + 1):
                print(self.queue[i], end=" ")
            print()


def main():
    size = 5  # Ubah ukuran antrian sesuai kebutuhan
    queue = CircularQueue(size)

    while True:
        print("\n")
        print("Indra Dwi Aryadi\n211011450468\nAntrian Lingkaran\n03TPLP003\n")
        print("Pilihan:")
        print("1. INSERT")
        print("2. DELETE")
        print("3. CETAK ANTRIAN")
        print("4. QUIT")
        choice = int(input("Masukkan pilihan: "))

        if choice == 1:
            try:
                item = input("Masukkan karakter yang akan dimasukkan: ")
                if not item:
                    raise ValueError("Karakter tidak boleh kosong.")
                queue.enqueue(item)
            except ValueError as e:
                print("Error:", str(e))
        elif choice == 2:
            deleted_item = queue.dequeue()
            if deleted_item is not None:
                print("Karakter", deleted_item, "dihapus dari antrian.")
            else:
                print("Antrian kosong. Tidak bisa menghapus item.")
        elif choice == 3:
            queue.display()
        elif choice == 4:
            print("Program berakhir.")
            break
        else:
            print("Pilihan tidak valid. Silakan masukkan pilihan yang valid.")


if __name__ == '__main__':
    main()
