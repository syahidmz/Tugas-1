#include <iostream>
using namespace std;

int main(){

int total, angka = 1;
while (angka <= 19){
    total += angka; 
    cout << angka;
    angka+=2;
    if (angka <= 19)
    cout << " + "; 
}
cout << " = " << total;
}