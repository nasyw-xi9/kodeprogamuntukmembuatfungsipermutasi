#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 //mendeklarasikan teks1 dan teks2
 chat teks1[10], teks2[10];
 int j1hdepan, J1hkel, j1hhuruf;
 
 //menampilkan pesan u/ meminta masukan dari pengguna 
 cout << "Masukan Nama Depan Anda?: ";
 cin >> teks1;
 cout <<"Masukan Nama Depan Anda?: ";
 cin >> teks2;
 //menghitung panjang teks
 j1hdepan = strlen(teks1);
 j1hke1 = strlen(teks2);
 j1hhuruf = j1hdepan + j1hke1;
 
 //menampilkan hasil pengguna 
cout << "Nama Lengkap Anda: " << teks1 << " " << teks2 <<
endl;
cout << Jumlah Huruf Nama Anda: " << j1hhuruf << " Huruf"
<<endl;
 system ("PAUSE");
 return 0;
}
