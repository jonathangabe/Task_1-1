#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
 int a,b,c,d,e,pil;
 float f;
 string jwb;

 do
 {
    cout << endl;
    cout << "/t/tPilih operasi yang ingin dilakukan : " << endl << endl;
    cout << "/t1. Penjumlahan" << endl;
    cout << "/t2. Pengurangan" << endl;
    cout << "/t3. Perkalian  " << endl;
    cout << "/t4. Pembagian" << endl;
    cout << "/t5. Keluar" << endl << endl;
    cout << "/tMasukkan pilihan = ";
    cin >> pil ;

    if ( pil == 1)
 {
    cout << "/tMasukkan nilai pertama : ";
    cin >> a;
    cout << "/tMasukkan nilai kedua : ";
    cin >> b;
    c=a+b;
    cout << "/tHasil penjumlahan = " << c << endl;
 }
    if ( pil == 2 )
 {
    cout << "/tMasukkan nilai pertama : ";
    cin >> a;
    cout << "/tMasukkan nilai kedua : ";
    cin >> b;
    d=a-b;
    cout << "/tHasil pengurangan = " << d << endl;
 }
    if ( pil == 3 )
 {
    cout << "/tMasukkan nilai pertama : ";
    cin >> a;
    cout << "/tMasukkan nilai kedua : ";
    cin >> b;
    e=a*b;
    cout << "/tHasil perkalian = " << e << endl;
 }
    if ( pil == 4 )
 {
    cout << "/tMasukkan nilai pertama : ";
    cin >> a;
    cout << "/tMasukkan nilai kedua : ";
    cin >> b;
    f=a/b;
    cout << "/tHasil pembagian = " << f << endl;
 }
 }
    while ( pil !=5 );
    system ("cls");
    cout << "/t/tTerima kasih telah mencoba." << endl;
    return(0);
}
