#include <iostream>
using namespace std;
int main() 
{
  int a, b;
  char lagi;

  atas :
  cout << "Masukkan Bilangan : ";
  cin >> a;

  b = a % 2;
  cout << "Nilai %d %% 2 adalah = " << b << endl;
  cout << "\n Ingin hitung lagi [Y/T] : ";
  cin >> lagi;
  if (lagi == 'Y'||lagi == 'y')
    goto atas;
  getchar;
}