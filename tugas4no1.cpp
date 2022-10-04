#include <iostream>
using namespace std;
int main()
{
    char nama [20];
    char hadiah [200];
    float Nilai1=0, Nilai2=0, Nilai3=0, total=0, rata;

    cout << "Program Hitung Nilai Rata-Rata" << endl;

    cout << "Nama Siswa : ";
    cin >> nama;

    cout << "Nilai Pertandingan 1 = ";
    cin >> Nilai1;

    cout << "Nilai Pertandingan 2 = ";
    cin >> Nilai2;

    cout << "Nilai Pertandingan 3 = ";
    cin >> Nilai3;

    rata = (Nilai1+Nilai2+Nilai3)/3;

    cout << endl;
    cout << "Siswa yang bernama : " << nama << endl;
    cout << "Memperoleh Nilai Rata-Rata = " << rata << endl;
    cout << "Dari hasil perlobaan yang diikutinya" << endl;

    if (rata >= 85)
      cout << "Mendapat Hadiah Komputer Core i5" << endl;
    else if (rata >= 70)
      cout << "Mendapat Hadiah Uang Sebesar Rp. 2.500.000" << endl;
    else if (rata > 70)
      cout << "Mendapat Hadiah Hiburan" << endl;
    return 0;  
}