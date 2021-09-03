#include<iostream>
#include<cmath>
using namespace std;
int main(){
  for(int j=20;j<=30;++j)
  { int ctr=0;
    for(int i=2;i<=sqrt(j);++i)
      {
        if(j%i==0){
          ctr=1;
        }
        if(ctr==0){
          std::cout << j << '\n';
        }
      }
  }
}
