#include<iostream>
using namespace std;
int main()
{
  string s="ambarish",n="kushi";
  s.pop_back(); // removes only last character.
  cout<<s<<endl;
  n.erase(2); // removes entire characters from given index number.
  cout<<n;
}