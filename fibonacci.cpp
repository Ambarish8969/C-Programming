#include<iostream>
using namespace std;
int main()
{
  int n,n1=0,n2=1;
  cout<<"Enter a number : ";
  cin>>n;
  // 
  if(n==0)
  {
    cout<<n1;
  }
  else if(n==1)
  {
    cout<<n1<<" "<<n2;
  }
  else
  {
    cout<<n1<<" "<<n2<<" ";
    for(int i=2;i<n;++i)
  {  
    int n3=n1+n2;
    cout<<n3<<" ";
    n1=n2;
    n2=n3;
  }
  }
  
}