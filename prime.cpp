#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Prime Numbers between 20 and 30 are:\n";

    for (int i = 20; i <= 30; i++) //loop to check for each number in the range

    {
        int ctr = 0; //to maintain factor count

        for (int j = 2; j <= sqrt(i); j++) //checking for factors

        {
            if (i % j == 0)

                ctr = 1; //increasing factor count when found
        }

        if (ctr == 0) //checking and printing prime numbers

            cout << i << " ";
    }

    return 0;
}

// To check given number is prime or not?         
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n,i,m=0,flag=0;
//     cout<<"Enter the number to check prime : ";
//     cin>>n;
//     m=n/2;
//     for(i=2;i<=m;i++)
//     {
//         if(n%i==0)
//         {
//             cout<<"Number is not Prime."<<endl;
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         cout<<"Number is Prime."<<endl;
//     return 0;
//     }
// }