#include<iostream>
using namespace std;
int fact(int num){
  int fact1=1;
  for(int i=num;i>=1;i--){
     fact1=fact1*i;
  }
  return fact1;
}
int main()
{
  int n;
  std::cin >> n;
  std::cout << fact(n) << '\n';
}
