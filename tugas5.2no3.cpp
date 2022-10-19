#include <iostream>
using namespace std;

int main(){

int total, angka = 2;
while (angka <= 20){
    total += angka; 
    cout << angka;
    angka+=2;
    if (angka <= 20)
    cout << " + ";
}
cout << " = " << total;
}