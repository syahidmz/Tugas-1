#include <iostream>
using namespace std;

int main() {
  int x, y, a[100][100], b[100][100], sum[100][100], i, j;
  cout << "Masukan Jumlah Baris: ";
  cin >> x;
  cout << "Masukan Jumlah Kolom: ";
  cin >> y;

  cout << "Masukan matriks pertama: " << endl;
  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++) {
      cout << "Matriks a" << i + 1 << j + 1 << " : ";
      cin >> a[i][j];
    }
  cout << endl << "Masukan matriks kedua: " << endl;
  for (i = 0; i < x; i++)
    for (j = 0; j < y; j++) {
      cout << "Matriks b" << i + 1 << j + 1 << " : ";
      cin >> b[i][j];
    }for (i = 0; i < x; i++)
    for (j = 0; j < y; j++)
      sum[i][j] = a[i][j] + b[i][j];
  cout << "Penjumlahan kedua matriks: " << endl;
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
  cout << "Pengurangan kedua matriks :" << endl;
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
  cout << "Perkalian kedua matriks :" << endl;
  for (i = 0; i < x; i++) {
    for (j = 0; j < y; j++) {
      cout << sum[i][j] << " ";
      if (j == y - 1)
        cout << endl;
    }
  }
return 0;
}