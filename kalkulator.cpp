// Masukan Library

#include <iostream>
#include <vector>

// membuat namespace std agar tidak perlu mengetik std::cout

using namespace std;

// membuat fungsi utama

int main(){
  // membuat variabel untuk menyimpan data

  int pilihan, banyak_bilangan, i;
  float bilangan, hasil;
  vector<float> bilangan_vector;
  vector<char> operator_vector;
  char operator_aritmatika;

  // membuat menu

  cout << "Pilih OPERATOR ARITMATIKA:" << endl;
  cout << "1. Penjumlahan" << endl;
  cout << "2. Pengurangan" << endl;
  cout << "3. Perkalian" << endl;
  cout << "4. Pembagian" << endl;
  cout << "5. Modulus" << endl;
  cout << "6. Campuran" << endl;
  cout << endl;

  // membuat inputan untuk memilih operator aritmatika
  cout << "Masukan pilihan: ";
  cin >> pilihan;

  // jika pilihan 6 maka akan menjalankan fungsi campuran
  if (pilihan == 6) {
    cout << "Masukan bilangan dan operator (+, -, *, /, %) atau ketik 's' untuk berhenti: " << endl;
    cout << "Seperti contoh: 1 + 2 - 3 * 4 / 5 % 6" << endl;
    // membuat perulangan untuk memasukan bilangan dan operator jika memasukan 's' maka akan berhenti
    while (cin >> bilangan && bilangan != 's') {
      bilangan_vector.push_back(bilangan);
      // jika memasukan operator maka akan masuk ke dalam vector operator dan jika memasukan 's' maka akan berhenti
      if (cin >> operator_aritmatika && operator_aritmatika != 's') {
        operator_vector.push_back(operator_aritmatika);
      }
    }
    // membuat perulangan untuk menampilkan hasil dari operator aritmatika
    hasil = bilangan_vector[0];

    // membuat perulangan untuk menampilkan hasil dari operator aritmatika
    for (i = 0; i < operator_vector.size(); i++) {
      switch (operator_vector[i]) {
        case '+':
          hasil += bilangan_vector[i + 1];
          break;
        case '-':
          hasil -= bilangan_vector[i + 1];
          break;
        case '*':
          hasil *= bilangan_vector[i + 1];
          break;
        case '/':
          hasil /= bilangan_vector[i + 1];
          break;
        case '%':
          hasil = (int)hasil % (int)bilangan_vector[i + 1];
          break;
      }
    }
    cout << "Hasil Campuran: " << hasil << endl;
  }
  else {
    // membuat inputan untuk memasukan banyak bilangan
    cout << "Masukan banyak bilangan: ";
    cin >> banyak_bilangan;

    // membuat perulangan untuk memasukan bilangan
    cout << "Masukan bilangan: " << endl;
    for (i = 0; i < banyak_bilangan; i++) {
      cout << "Bilangan ke-" << i + 1 << ": ";
      cin >> bilangan;
      bilangan_vector.push_back(bilangan);
    }

    switch (pilihan) {

      case 1:
        // hasil dibuat 0 agar hasilnya mulai dari 0
        hasil = 0;
        // membuat perulangan untuk menjumlahkan bilangan
        for (i = 0; i < banyak_bilangan; i++) {
          hasil += bilangan_vector[i];
        }
        cout << "Hasil Penjumlahan: " << hasil << endl;
        break;

      case 2:
        // hasil dibuat bilangan pertama agar hasilnya mulai dari bilangan pertama
        hasil = bilangan_vector[0];
        // membuat perulangan untuk mengurangkan bilangan
        for (i = 1; i < banyak_bilangan; i++) {
          hasil -= bilangan_vector[i];
        }
        cout<< "Hasil Pengurangan: " << hasil << endl;
        break;

      case 3:
        // hasil dibuat 1 agar hasilnya mulai dari 1, karena jika hasilnya 0 maka hasil perkalian akan 0
        hasil = 1;
        // membuat perulangan untuk mengalikan bilangan
        for (i = 0; i < banyak_bilangan; i++) {
          hasil *= bilangan_vector[i];
        }
        cout << "Hasil Perkalian: " << hasil << endl;
        break;

      case 4:
        // hasil dibuat bilangan pertama agar hasilnya mulai dari bilangan pertama
        hasil = bilangan_vector[0];
        // membuat perulangan untuk membagi bilangan
        for (i = 1; i < banyak_bilangan; i++) {
          hasil /= bilangan_vector[i];
        }
        cout << "Hasil Pembagian: " << hasil << endl;
        break;

      case 5:
        // hasil dibuat bilangan pertama agar hasilnya mulai dari bilangan pertama
        hasil = (int)bilangan_vector[0];
        // membuat perulangan untuk membagi bilangan
        for (i = 1; i < banyak_bilangan; i++) {
          // hasil dibuat integer agar hasil modulusnya tidak ada koma
          hasil = (int)hasil % (int)bilangan_vector[i];
        }
        cout << "Hasil Modulus: " << hasil << endl;
        break;
    }
  }

  return 0;
}
