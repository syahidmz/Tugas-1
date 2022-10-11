#include <iostream>
using namespace std;

int main() {
  cout << " Program C++ Segitiga Bintang " << endl;
  cout << "===================================" << endl;
  cout << endl;

int tinggi_segitiga,i,j;

  cout << "Input tinggi segitiga: ";
  cin >> tinggi_segitiga;

  for(i=1; i<=tinggi_segitiga; i++){
    for(j=1; j<=i; j++){
      cout << " *";
    }
    cout << endl;
  }
  return 0;
}