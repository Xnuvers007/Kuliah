#include <stdio.h>
#include <cstring>
#include <iostream>

using namespace std;

int main ()

{

    int pin;

    int pilihan ;

    char kode[15],konfirmasi[5];

 int saldo = 500000;

 printf("===================================");

 printf("Selamat datang di ATM Bank Indra");

 printf("===================================");

    cout<<endl;

 // printf("Masukkan Pin Anda : ");

 string password = "12345";
 int i;
 string login = "block";
 string pass_input;

 i = 1;

 do {                
       cout << "Masukkan Pin Anda : ";
       cin>>pass_input;
       
       if (pass_input == password) {    
	   	   system("cls||clear");        
           cout << " ================\n";            
           cout << "| Login Berhasil |" << endl;           
           cout << " ================\n\n";     
           i = 4;
           login = "berhasil";        } 
       else {            
           cout << "\n===========================\n";            
           cout << "Username / Password Salah! ("<<i<<"x)\n";
		   cout << "=============================\n\n";            
           i = i +1;
       }   
    } while (i <= 3);

// scanf("%d",&pin);

 if(login != "berhasil"){
     cout<<"Anda telah 3x salah login.\n";       
       cout<<"Silahkan coba 40218 Hari lagi. Terima Kasih..\n\n";      
	}
  if(login == "berhasil"){

        awal:

        printf("1. Cek Saldo");
        cout<<endl;

        printf("2. Tarik Tunai");
        cout<<endl;

        printf("3. Transfer");
        cout<<endl;

        printf("4. Cairkan Bonus");
        cout<<endl;

        printf("5. Keluar");
        cout<<endl;

        printf("Masukkan Pilihan anda : ");

        scanf("%d",&pilihan);

        switch(pilihan){

            case 1:

                printf("Cek Saldo");
                cout<<endl;

                printf("Saldo anda adalah %d ",saldo);

                break;

            case 2:

                printf("Tarik Tunai");

                int uangTarik;

                printf(" Masukkan jumlah uang yang ditarik : ");

                scanf("%d",&uangTarik);

                if(uangTarik>saldo){

                    printf("Saldo anda tidak cukup");
                    printf("keluar");

                }else{

                     saldo=saldo-uangTarik;

                     printf("Sisa Saldo anda adalah %d",saldo);

                }

                break;

                case 3 :
                    printf("Transfer");
                    int uangTransfer;
                    
                    printf("Masukkan jumlah uang yang di Transfer : ");
                    scanf("%d",&uangTransfer);

                if(uangTransfer>saldo){

                    printf("Saldo anda tidak cukup");

                }else{

                     saldo=saldo-uangTransfer;

                     printf("Sisa Saldo anda adalah %d",saldo);

                }
                break;

                case 4 :

                    printf("Masukkan Kode :");

                    scanf("%s", &kode);

                    if(strcmp(kode, "yoyoayo") == 0){

                        saldo=saldo+100000;

                        printf("Bonus Berhasil ditambah, saldo anda sekarang : %d",saldo);

                    }else if(strcmp(kode, "FTKJ4Y4") == 0){

                        saldo=saldo+200000;

                        printf("Bonus Berhasil ditambah, saldo anda sekarang : %d",saldo);

                    }else if(strcmp(kode, "unpamunggul")==0)

                    {

                        saldo=saldo+300000;

                        printf("Bonus Berhasil ditambah, saldo anda sekarang : %d",saldo);

                    }else{

                        printf("Kode Salah");

                    }

                break;

                case 5:
                    
                        printf("Keluar");
                        goto akhir;
    
                        break;

                default :
                    printf("Pilihan anda salah n");

        }

         konfirmasi:

        cout<<endl;

         printf("Apakah anda ingin bertransaksi kembali ? Y/T : ");

         scanf("%s",&konfirmasi);

         if(strcmp(konfirmasi, "Y") == 0 || strcmp(konfirmasi, "y") == 0){

                goto awal;

         }else if(strcmp(konfirmasi, "T") == 0 || strcmp(konfirmasi, "t") == 0){

                printf("Terimakasih sudah bertransaksi bersama kami");

                goto akhir;

         }else{

            printf("nPilihan salah");

            goto konfirmasi;

         }

    }else{

        printf("PIN yang anda masukkan salah");

    }

    akhir:

   return 0;

}