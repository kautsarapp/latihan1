#include <iostream>
using namespace std;

int main() {
  int x, y, a[100][100], b[100][100], sum[100][100], i, j;
  cout << "Masukan Jumlah Barisnya: ";
  cin >> x;
  cout << "Masukan Jumlah Kolomnya: ";
  cin >> y;

  cout << "Masukan matriks pertamanya: " << endl;
  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++) {
      cout << "Matriks a" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];
    }
  cout << endl << "Masukan matriks keduanya: " << endl;
  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++) {
      cout << "Matriks b" << i + 1 << j + 1 << " : ";
      cin >> b[i][j];
    }for (i = 0; i < x; i++)
    for (j = 0; j < y; j++)
      sum[i][j] = a[i][j] + b[i][j];
  cout << "Penjumlahan kedua matriksnya: " << endl;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      cout << sum[i][j] << " ";
      if (j == y - 1)
        cout << endl;
    }
  }

  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++)
      sum[i][j] = a[i][j] - b[i][j];
  cout << "Pengurangan kedua matriksnya :" << endl;
  for (i = 0; i < x; ++i) {
    for (j = 0; j < y; ++j) {
      cout << sum[i][j] << " ";
      if (j == y - 1)
        cout << endl;
    }
  }

  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++)
      sum[i][j] = a[i][j] * b[i][j];
  cout << "Perkalian kedua matriksnya :" << endl;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      cout << sum[i][j] << " ";
      if (j == y - 1)
        cout << endl;
    }
  }
return 0;
}