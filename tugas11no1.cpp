#include <iostream>
using namespace std;

int main()
{
  int a;
  int *bil = &a;
  
  *bil=202;
  
  cout << a << " ";
  (a)--;
  cout << a << " ";
  (a)++;
  cout << a << "\n";

  getchar();
}