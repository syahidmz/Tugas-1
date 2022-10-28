#include<iostream>
#include<ctype.h>
using namespace std;

int main()
{
  char kalimat[100];
  int i, spasi=0;
  
  cout << "Masukan Kalimat : ";
  cin.getline(kalimat, sizeof(kalimat));
  cout<<""<<std::endl;
  cout << "kata yang anda masukkan adalah: \n";
  
  for(i=0; kalimat[i]; i++)
  {
    if(isspace (kalimat[i]) || ispunct (kalimat[i]))
    {
      spasi++;
      }
    }
  cout << "dalam kalimat terdapat  " << spasi +1 <<" kata" << "\n\n";
  }