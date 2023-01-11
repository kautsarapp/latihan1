#include <iostream>
using namespace std;
int pangkat(int a, int i);
int main (){
  int a, i;
  cout << "MENGHITUNG PANGKAT" << endl;
  cout << "Masukkan Nilai W = ";
  cin >> a;
  cout << "Masukkan Nilai X = ";
  cin >> i;
  cout << "Pangkat " << a << " dari " << i << " adalah " << pangkat(a, i) << endl;
}
int pangkat(int a, int i){
  if (i==0)
    return 1;
  else
    return a*pangkat(a, i-1);
}