#include<iostream>
#include<curses.h> // Linux
//#include<conio.h> // Windows
#include<string>

using namespace std;

int main()
{
// int kode,jum_beli,harga1,harga2,harga3,total1,total2,total3,jumlh1,jumlh2,jumlh3,total;
int kode,jum_beli,harga1,harga2,harga3,total1 = 0,total2 = 0,total3 = 0,jumlh1 = 0,jumlh2 = 0,jumlh3 = 0,total = 0;
int dis,hasildis,jmlbyr,kembalian;
char lagi;

awal : 
system("clear"); //linux
// system("cls"); windows
cout <<"======================================"<< endl;
cout <<" H&M Jadul "<< endl;
cout <<"======================================"<< endl;
cout <<"1. Kaos = Rp 150.000,-"<< endl;
cout <<"2. Long Slave = Rp 200.000,-"<< endl;
cout <<"3. Celana = Rp 250.000,-"<< endl;
cout <<"======================================"<< endl << endl;

// cout<<"Masukan Jenis Jumlah Barang yang ingin di beli : ";
cout<<"Mau Berapa Kali Beli ? : ";
    cin>>jum_beli;
    
for (int i=0; i<jum_beli;i++){
    cout<<endl;
    cout<<"Masukkan Pilihan Anda(1-3) =";
    cin>>kode;

    switch(kode)
    {

    case 1 :
        
        cout<<"Nama Item = Kaos"<<endl;
        harga1=150000;
        cout<<"Masukkan Jumlah = ";
        cin>>jumlh1;
        
        total1 = jumlh1*harga1;
        cout<<"Total harga yaitu ="<<total1;
        
        cout<<endl;
        break;
       
    case 2 :
        
        cout<<"Nama Item = Long Slave"<<endl;
        harga2=200000;
        cout<<"Masukkan Jumlah = ";
        cin>>jumlh2;
        
        total2 = jumlh2*harga2;
        cout<<"Total harga yaitu ="<<total2<<endl;
        
        cout<<endl;
        break;
        
    case 3 :
       
        cout<<"Nama Item = Celana"<<endl;
        harga3=250000;
        cout<<"Masukkan Jumlah = ";
        cin>>jumlh3;
        
        total3 = jumlh3*harga3;
        cout<<"Total harga yaitu ="<<total3<<endl;
        cout<<endl;
         
        break;

    }
    

}
    
total = total1 + total2 + total3;
cout<<endl;
cout << "Total Belanja anda = "<<total<<endl;
    

if( total >= 1000000){
        dis=0.35*total;
        hasildis=total-dis;
                       
        cout<<"Total setelah diskon     : "<<hasildis<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Masukan jumlah pembayaran = "; cin >> jmlbyr;
        kembalian = jmlbyr - hasildis;
        cout << "Kembalian anda = "<<kembalian<<endl;
        
} else if (total > 900000 && total < 1000000){
        dis=0.15*total;
        hasildis=total-dis;
        cout<<"Total setelah diskon     : "<<hasildis<<endl;
        cout<<"--------------------------------------"<<endl;
        cout<<"Masukan jumlah pembayaran = "; cin >> jmlbyr;
        kembalian = jmlbyr - hasildis;
        cout << "Kembalian anda = "<<kembalian<<endl;
} else{
        cout<<"Masukan jumlah pembayaran = "; cin >> jmlbyr;
        kembalian = jmlbyr - total;
        cout << "Kembalian anda = "<<kembalian<<endl;
}
    
cout<<"Anda Ingin Mengulangi Lagi (Y?N)";
    cin>>lagi;
        if(lagi=='y' || lagi=='Y'){
            goto awal;
        }
        if (lagi=='N' || lagi=='n'){
            goto selesai;
        }
selesai:
    system("clear"); // Linux
    // system("cls") // Windows
    cout<<"Terima Kasih Kunjungan Anda di H&M Jadul"<<endl;

return 0;
}
