#include<iostream>
#include<cmath>
using namespace std;
int add(int a,int b){ //Addtion....
  int c=a+b;
  return c;
}
int isprime(int num){   // Check Prime or Not....
  for(int i=2;i<=sqrt(num);i++){
    if(num%2==0){
      return false;
    }
  }return true;
}
int fib(int number){ //Fibonaccie Series....
  int t1=0;
  int t2=1;
  int nextTerm;
  for(int j=1;j<=number;j++){
    cout <<t1<<endl;
    nextTerm=t1+t2;
    t1=t2;
    t2=nextTerm;
  }
  return t1;
}
int main()
{ int n;
  cin >> n;
  cout << "The sum is : "<< add(2,3) << '\n';
  cout << isprime(n) << '\n';
  cout << fib(n);
}
