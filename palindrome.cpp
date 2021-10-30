// Palindrome Numbers.
#include<iostream>
using namespace std;
int main()
{
    int n,temp=0,sum=0;
    cout<<"Enter n value : ";
    cin>>n;
    temp=n;
    while (n>0)
    {
        int r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum){
        cout<<"Given Number is Palindrome.";
    }else{
        cout<<"Given Number is not Palindrome.";
    }
    
}

// Palindrome Strings.
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{   
    string str;
    cout<<"Enter a String : ";
    cin>>str;
    // Reversing string.
    string name=str;
    reverse(name.begin(), name.end());
    if(str==name){
        cout<<"Given string is Palindrome";
    }else{
        cout<<"Given string is not Palindrome";
    }
}