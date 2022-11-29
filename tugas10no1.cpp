#include<iostream>
using namespace std;

int pangkat(int a, int b);
int main (){
  int a, b;
  cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF" << endl;
  cout << "Masukan Nilai X = ";
  cin >> a;
  cout << "Masukan Nilai Y = ";
  cin >> b;
  cout << a << " Dipangkatkan " << b << " = " << pangkat(a, b) << endl;
  }
int pangkat(int a, int b){
  if (b==0)
    return 1;
  else
    return a*pangkat(a, b-1);
}