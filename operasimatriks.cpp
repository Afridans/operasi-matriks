#include<iostream>
#include<iomanip>
using namespace std;
int barisA,kolomA,barisB,kolomB,barisT,kolomT,pilih,i,j,k,a[10][15],b[10][15],c[10][15],transpose[10][15], matriks[10][15];

void input(){
	cout<<"Masukkan Matriks A dan Matriks B\n";
	cout<<"Matriks A\n";
	cout<<"Masukkan Banyak Baris Matriks A: ";
	cin>>barisA;
	cout<<"Masukkan Banyak Kolom Matriks A: ";
	cin>>kolomA;
	cout<<endl;
	for(i=1;i<=barisA;i++)
	{
		for (j=1;j<=kolomA;j++)
		{
			cout<<"A["<<i<<"]["<<j<<"] =";cin>>a[i][j];
		}
	}
	cout<<endl;
	for(i=1;i<=barisA;i++)
	{
		for (j=1;j<=kolomA;j++)
		{
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}

	cout<<endl;
	cout<<"Matriks B\n";
	cout<<"Masukkan Banyak Baris Matriks B: ";
	cin>>barisB;
	cout<<"Masukkan Banyak Kolom Matriks B: ";
	cin>>kolomB;
	cout<<endl;
	for(i=1;i<=barisB;i++)
	{
		for (j=1;j<=kolomB;j++)
		{
			cout<<"B["<<i<<"]["<<j<<"] =";cin>>b[i][j];
		}
	}
    for(i=1;i<=barisA;i++)
    {
        for (j=1;j<=kolomA;j++)
        {
            cout<<setw(4)<<b[i][j];
        }
        cout<<endl;
    }
}

void inputTranspose(){
    cout<<"Masukkan Banyak Baris Matriks yang akan di Transpose: ";
	cin>>barisT;
	cout<<"Masukkan Banyak Kolom Matriks yang akan di Transpose: ";
	cin>>kolomT;
    cout << "Masukkan elemen matriks\n";
        for (i = 0; i < barisT; i++){
            for (j = 0; j < kolomT; j++){
            cout<<"Matriks["<<i<<"]["<<j<<"] =";cin>> matriks[i][j];
    }
  }
}

void tambah(){

    if(barisA==barisB&&kolomA==kolomB)
    {
        cout<<"Hasil Penjumlahan Matriks\n";
        for(i=1;i<=barisA;i++){
            for(j=1;j<=kolomA;j++){
                c[i][j]=a[i][j]+b[i][j];
                    cout<<setw(4)<<c[i][j];
            }
                cout<<endl;
        }
    }
    else{
        cout<<"Untuk Penjumlahan, baris, dan kolom matriks A harus sama dengan matriks B"<<endl;
    }
}

void kurang(){

    if(barisA==barisB&&kolomA==kolomB){
        cout<<"Hasil Pengurangan Matriks\n";
        for(i=1;i<=barisA;i++){
            for(j=1;j<=kolomA;j++){
                c[i][j]=a[i][j]-b[i][j];
                cout<<setw(4)<<c[i][j];
            }
            cout<<endl;
        }
    }
    else{
    cout<<"Untuk Pengurangan, baris dan kolom matriks A harus sama dengan Matriks B"<<endl;
    }
}

void kali(){
    if(kolomA==barisB){
        cout<<"Hasil Perkalian Matriks\n";
        for(i=1;i<=barisB;i++){
            for(j=1;j<=kolomB;j++){
                c[i][j]=0;
                    for(k=1;k<+barisA;k++){
						c[i][j]+=a[i][k]*b[k][j];
					}
            }
        }

        for(i=1;i<=barisA;i++){
            for(j=1;j<=kolomB;j++){
                cout<<setw(4)<<c[i][j];
            }
                cout<<endl;
        }
    }
    else{
		cout<<"Kolom Matriks A harus sama dengan Baris Matriks B"<<endl;
    }
}

void bagi(){
    if(kolomA==barisB){
        cout<<"Hasil Pembagian Matriks\n";
        for(i=1;i<=barisB;i++){
            for(j=1;j<=kolomB;j++){
                c[i][j]=0;
                    for(k=1;k<+barisA;k++){
						c[i][j]+=a[i][j]/b[i][j];
					}
            }
        }

        for(i=1;i<=barisA;i++){
            for(j=1;j<=kolomB;j++){
                cout<<setw(4)<<c[i][j];
            }
                cout<<endl;
        }
    }
    else{
		cout<<"Kolom Matriks A harus sama dengan Baris Matriks B"<<endl;
    }
}

void trans(){
    for (i = 0; i < barisT; i++){
        for (j =0; j < kolomT; j++){
            transpose[j][i] = matriks[i][j];
    }
  }
    cout << "Hasil Sebelum Transpose Matriks: \n";
        for (i = 0; i < barisT; i++){
            for (j = 0; j < kolomT; j++){
                cout << matriks[i][j] << "\t";
            }
        cout << endl;
        }

    cout << "Hasil Setelah Transpose Matriks: \n";
      for (i = 0; i < kolomT; i++){
        for (j = 0; j < barisT; j++){
          cout << transpose[i][j] << "\t";
        }
        cout << endl;
      }
}

void menu()
{
do{
    cout<<"Operasi Matriks"<<endl;
    cout<<"1. Penjumlahan Matriks"<<endl;
    cout<<"2. Pengurangan Matriks"<<endl;
    cout<<"3. Perkalian Matriks"<<endl;
    cout<<"4. Pembagian Matriks"<<endl;    
    cout<<"5. Transpose Matriks"<<endl;
    cout<<"6. Selesai"<<endl;
    cout<<endl;
    cout<<"Masukkan pilihan Anda: ";
    cin>>pilih;
    switch(pilih)
    {
        case 1:
            system("clear");
            cout<<"Anda memilih Penjumlahan Matriks\n";
            input();
            tambah();
        break;

        case 2:
            system("clear");
            cout<<"Anda memilih Pengurangan Matriks\n";
            input();
            kurang();
        break;

        case 3:
            system("clear");
            cout<<"Anda memilih Perkalian Matriks\n";
            input();
            kali();
        break;

        case 4:
            system("clear");
            cout<<"Anda memilih Pembagian Matriks\n";
            input();
            bagi();
        break; 

        case 5:
            system("clear");
            cout<<"Anda memilih Transpose Matriks\n";
            inputTranspose();
            trans();
        break;
        
        case 6:
            system("clear");
            cout<<"Anda telah mengakhiri program\n";
        break;

        default:
            system("clear");
            cout << "Pilihan tidak valid. \n"
            << "Masukan pilihan kembali.\n";
            break;
            }

    }
while(pilih!=6);
}

int main() {
   menu();
   return 0;
}
