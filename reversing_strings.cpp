// #include<iostream>
// using namespace std;
// int main()
// {   
//     string str="ambarish";
//     for(int i=(str.length()-1);i>=0;i--){
//         cout<<str[i];
//     }
// }

// // Using builtin function.
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     string name="ambarish";
//     reverse(name.begin(), name.end());
//     cout<<name;
// }

#include<iostream>
using namespace std;

string string_reverse(string inp)
{
    for(int i=inp.length()-1;i>=0;i--){
        return inp[i];
    }
    
}
int main()
{   string input;
    cout<<"Enter a string : ";
    cin>>input;
    string n=string_reverse(input);
    cout<<n;
}