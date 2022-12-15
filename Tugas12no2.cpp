#include <iostream>
using namespace std;

struct mhs
{
  char nama[20], nim[10],matkul[15];
  int sks;
  };

struct mhs bayar[2];

int main(){
  int bts,var,tetap;
  for(int i=0; i<1; i++)
  {
    cout<<"\n\n-------------------------------\n";
    cout<<"\nNama mhs = ";
    cin>>bayar[2].nama;
    cout<<"NIM = ";
    cin>>bayar[2].nim;
    cout << "Mata Kuliah = ";
    cin >>bayar[2].matkul;
    cout<<"Jumlah sks = ";
    cin >> bayar[2].sks;
    }
 
  
    if(bayar[2].sks==0)
    {
      tetap=250000;
      var=bayar[2].sks*250000;
      }else if(bayar[2].sks==2)
    {
      tetap=300000;
      var=bayar[2].sks*300000;
      }else if(bayar[2].sks<0 || bayar[2].sks>2)
    {
      cout << "---------------------------"<<endl;
      cout<<"Program tidak sesuai\n";
      cout << "---------------------------"<<endl;
      goto akhir;
      }
    cout<<"\n-------------------------------\n";
    cout<<" Output ";
    cout<<"\n-------------------------------\n";
    cout<<"\nNama mhs = "<< bayar[2].nama;
    cout<<"\nNIM = "<< bayar[2].nim;
    cout<<"\nMata Kuliah = "<< bayar[2].matkul;
    cout<<"\nJumlah sks = "<<bayar[2].sks;
    cout<<"\nSPP tetap = "<< tetap;
    cout<<"\nSPP variabel = "<< var;
    cout<<endl<<endl;
    akhir:

    return 0;
    }