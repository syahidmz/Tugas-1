#include<bits/stdc++.h>

using namespace std;
 
int main(){
  string s1 = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";
  transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
  cout<<s1<<endl;
  
  return 0;
}