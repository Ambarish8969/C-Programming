// #include<iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cin>>n;
//   int sum=0;
//   for(int count=1;count<=n;count++){
//   sum=sum+count;
//   }
//   std::cout << sum << '\n';
// }
#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            std::cout << i << endl;
        }
        else
        {
            continue;
        }
    }
}
