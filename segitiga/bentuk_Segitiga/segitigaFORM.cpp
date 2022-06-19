#include<iostream>
using namespace std;

void SegitigaBiasa()
{
int spasi, baris;

    cout <<"Masukan Jumlah Baris: ";
    cin >> baris;

    for(int i = 1, k = 0; i <= baris; ++i, k = 0)
    {
        for(spasi = 1; spasi <= baris-i; ++spasi)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }
    return;
}

void SegitigaSamaKaki(){
      int baris, spasi, i, j;
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
  for (i = 1; i <= baris; i++)
  {
    for (spasi = i; spasi < baris; spasi++)
          cout << " ";
    for (j = 1; j <= i; j++)
          cout << "* ";
    cout << "\n";
  }
  return;
}

void SegitigaSamaKakiTerbalik(){
  int baris, spasi, i, j;
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
  for (i = baris; i >= 1; i--)
  {
    for (spasi = i; spasi < baris; spasi++)
          cout << " ";
    for (j = 1; j <= i; j++)
          cout << "* ";
    cout << "\n";
  }
  return;
  }

void SegitigaSikuSiku(){
  int  i, j, baris;
  cout << "Segitiga Bintang Siku Siku\n";
  cout << "Masukkan jumlah baris:  ";
  cin >> baris;
  for (i = 1; i <= baris; i++)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return;
}

void SegitigaSikuSikuTerbalik()
{
  int  i, j, baris;
  cout << "Segitiga Bintang Siku Siku Terbalik\n";
  cout << "Masukkan jumlah baris:  ";
  cin >> baris;
  for (i = baris; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      cout << "* ";
    }
    cout << "\n";
  }
  return;
}

void SegitigaSikuSikuDigabung()
{
      int baris, x, y, k;
      cout << "Masukkan jumlah baris: ";
      cin >> baris;
      for (x = 1; x <= baris; x++)
      {
            for (y = 1; y <= baris; y++)
            {
                  if (y <= x)
                        cout << "*";
                  else
                        cout << " ";
            }
            for (y = baris; y >= 1; y--)
            {
                  if (y <= x)
                        cout << "*";
                  else
                        cout << " ";
            }
            cout << "\n";
      }
      return;
}

void SegitigaBintangSamping()
{
  int baris, i, j;
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
  for (i = 1; i <= baris; i++)
  {
    for (j = 1; j <= i; j++)
    {
          cout << "*";
    }
    cout << "\n";
  }
  for (i = baris; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
          cout << "*";
    }
    cout << "\n";
  }
  return;
}

void SegitigaBintangSamping2()
{
  int baris, i, j;
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
  for (i = 1; i <= baris; i++)
  {
    for (j = i; j < baris; j++)
    {
          cout << " ";
    }
    for (j = 1; j <= i; j++)
    {
          cout << "*";
    }
    cout << "\n";
  }
  for (i = baris; i >= 1; i--)
  {
    for (j = i; j <= baris; j++)
    {
          cout << " ";
    }
    for (j = 1; j < i; j++)
    {
          cout << "*";
    }
    cout << "\n";
  }
  return;
}

void SegitigaBintangSampingKupu()
{
    int i, j, baris;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for (i = 0; i < baris; i++)
    {
        for (j = 0; j < (2 * baris); j++)
        {
            if (i >= j)
                cout << "*";
            else
                cout << " ";
            if (i >= (2 * baris - 1) - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
      for (i = 0; i < baris; i++)
    {
        for (j = 0; j < (2 * baris); j++)
        {
            if (i + j <= baris - 1)
                cout << "*";
            else
                cout << " ";
            if ((i + baris) <= j)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return;
}

void SegitigaBintangBolong()
{
  int baris, i, j, spasi;
  cout << "Masukkan jumlah baris: ";
  cin >> baris;
  for (i = 1; i <= baris; i++)
  {
    for (spasi = i; spasi < baris; spasi++)
          cout << " ";
    for (j = 1; j <= (2 * baris - 1); j++)
    {
          if (i == baris || j == 1 || j == 2 * i - 1)
                cout << "*";
          else
                cout << " ";
    }
    cout << "\n";
  }
  return;
}

void SegitigaBintangBolongTerbalik()
{
    int baris, i, j, spasi;

    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for (i = baris; i >= 1; i--)
    {
        for (spasi = i; spasi < baris; spasi++)
            cout << " ";
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i == baris || j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return;
}

int main()
{
  int pilihan;
    awal:

    cout<<"1. Segitiga Biasa"<<endl;
    cout<<"2. Segitiga Sama Kaki"<<endl;
    cout<<"3. Segitiga sama kaki terbalik"<<endl;
    cout<<"4. Segitiga siku siku"<<endl;
    cout<<"5. Segitiga siku siku terbalik"<<endl;
    cout<<"6. Segitiga siku siku digabung"<<endl;
    cout<<"7. Segitiga bintang samping"<<endl;
    cout<<"8. Segitiga bintang samping 2"<<endl;
    cout<<"9. Segitiga bintang samping kupu"<<endl;
    cout<<"10. Segitiga bintang bolong"<<endl;
    cout<<"11. Segitiga bintang bolong terbalik"<<endl;
    cout<<"12. Keluar"<<endl;

    cout<<"Masukkan pilihan anda: ";
    cin>>pilihan;

    switch(pilihan)
    {
        case 1:
            SegitigaBiasa();
            goto awal;
        case 2:
            SegitigaSamaKaki();
            goto awal;
        case 3:
            SegitigaSamaKakiTerbalik();
            goto awal;
        case 4:
            SegitigaSikuSiku();
            goto awal;
        case 5:
            SegitigaSikuSikuTerbalik();
            goto awal;
        case 6:
            SegitigaSikuSikuDigabung();
            goto awal;
        case 7:
            SegitigaBintangSamping();
            goto awal;
        case 8:
            SegitigaBintangSamping2();
            goto awal;
        case 9:
            SegitigaBintangSampingKupu();
            goto awal;
        case 10:
            SegitigaBintangBolong();
            goto awal;
        case 11:
            SegitigaBintangBolongTerbalik();
            goto awal;
        case 12:
            exit(0);
        default:
            cout<<"Pilihan tidak ada"<<endl;
            goto awal;
    }
    return 0;
}
