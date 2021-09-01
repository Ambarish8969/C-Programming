#include<iostream>
#include<cmath>
using namespace std;
int add(int a,int b){
  int c=a+b;
  return c;
}
int isprime(int num){
  for(int i=2;i<=sqrt(num);i++){
    if(num%2==0){
      return false;
    }
  }return true;
}
int main()
{
  std::cout << "The sum is : "<< add(2,3) << '\n';
  std::cout << isprime(11) << '\n';
}
