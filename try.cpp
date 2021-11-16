#include<iostream>
#include<algorithm>
using namespace std;
int palindrome(string name){
  for(int i=name.length()-1;i>=0;i--){
    cout<<name[i];
  }
}
int main()
{ 
  string name_1="ambarish";
  cout<<palindrome(name_1);
}