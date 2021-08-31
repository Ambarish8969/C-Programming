//Which is biggest number in three given number......
#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b>>c;
  if(a>b){
    if(a>c){
      std::cout << a << '\n';
    }
    else{
      std::cout << c << '\n';
    }
  }else{
    if(b>c){
      std::cout << b << '\n';
    }else{
      std::cout << c << '\n';
    }
  }
  { //Odd or Even Number......
    int n;
    std::cin >> n;
    if(n%2==0){
      std::cout << "Even" << '\n';
    }else{
      std::cout << "Odd" << '\n';
    }
  }
}
