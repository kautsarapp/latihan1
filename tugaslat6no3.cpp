#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char a1[30], a2[30];

cout << "Masukan kata pertama = ";
  cin >> a1;
  cout << "Masukan kata kedua = ";
  cin >> a2;

strcat(a1,a2);
  cout << "Menjadi = "<< a1;
  getchar();
  }