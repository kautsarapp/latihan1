#include<iostream>
using namespace std;
   
int main() {
      
       int angka, jumlah, max, min;
     
       cout << " Mencari nilai terbesar dan terkecilnya. (jumlah angka ditentukan oleh)" << endl;
       cout << endl;
       cout << "masukkan jumlah angka yang akan dimasukkan: "; cin >> jumlah;
       cout << endl;
    
       for (int i = 1; i <= jumlah; i++) {
     
       cout << "Masukkan Angkanya      : "; cin >> angka;
   
       if ( i == 1 ) {
             min = angka;
             max = angka;
            }
            else if ( min > angka ) {
               min = angka;
            }
            else if ( max < angka) {
               max = angka;
           }
           else {}
           }
    
       cout << endl;
       cout << "Nilai terkecilnya yaitu           : " <<  min << endl;
       cout << "Nilai terbesarnya yaitu           : " <<  max << endl;
    
       getchar();
}