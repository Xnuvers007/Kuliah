#include <iostream>
#include <cstdlib>
using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
   while (l <= r) {
      int mid = l + (r - l) / 2;
      cout << "============================" << endl;
      cout << "Nilai Tengah: " << mid << ", nilai: " << arr[mid] << endl;
      cout << "Nilai Awal: " << l << ", nilai: " << arr[l] << endl;
      cout << "Nilai Akhir: " << r << ", nilai: " << arr[r] << endl<<endl;
      cout << "Mencari Nilai Tengah: ";
      cout << "(" << r << " + " << l << ") / 2 = " << mid << endl << endl;
      cout << "Jika Nilai Tengah lebih kecil dari " << x << " maka nilai awal menjadi " << mid << " + 1 = " << mid + 1 << endl;
      cout << "Jika Nilai Tengah lebih besar dari " << x << " maka nilai akhir menjadi " << mid << " - 1 = " << mid - 1 << endl;
      cout << "Jika Nilai Tengah sama dengan " << x << " maka nilai tengah adalah " << mid << endl << endl;
      cout << "============================" << endl << endl;


      if (arr[mid] == x) return mid;

      if (arr[mid] < x) l = mid + 1;

      else r = mid - 1;
   }

   return -1;
}

int main() {
    system("cls");
    cout<<"=========================================="<<endl;
    cout<<"Program Pencarian Data Dengan Binary Search"<<endl;
    cout<<"Dicoding oleh : Indra Dwi A"<<endl;
    cout<<"=========================================="<<endl<<endl;
    // user harus pencet sembarang, jika ingin melanjutkan program
    cout<<"Tekan sembarang untuk melanjutkan program..."<<endl;
    cin.get();
    system("cls");
    
//    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int arr[] = {2,5,8,12,15,25,37,57};
   // total semua array adalah 10
   cout << "Banyak Data: " << sizeof(arr)/sizeof(arr[0]) << endl;
   cout << "Data Dimula Dari indeks 0 sampai " << sizeof(arr)/sizeof(arr[0]) - 1 << endl << endl;

   // show array list
    cout << "Array: ";
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
        cout << arr[i] << " ";
    }
    cout<<"\n\n";
   int n = sizeof(arr)/sizeof(arr[0]);
   int x;

   cout<<"Masukan data yang ingin dicari: ";
   cin>>x;
   
   int result = binarySearch(arr, 0, n-1, x);

   if (result == -1) cout << "Data tidak ditemukan." << endl;
   
   else cout << "Data ditemukan pada indeks " << result << ". yaitu " << arr[result] << endl;

   return 0;
}
