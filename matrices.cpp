#include <iostream>
using namespace std;
int main()
{
  int m[10][10], n[10][10];
  int r, c, i, j;
  cout << "Enter no of Rows : ";
  cin >> r;
  cout << "Enter no of Coloumns : ";
  cin >> c;
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cin >> m[i][j];
    }
  }
  // cout<<"Enter second matrix.";
  // for(i=0;i<r;i++){
  //   for(j=0;j<c;j++){
  //     cin>>n[i][j];
  //   }
  // }
  for (i = 0; i < r; i++)
  {
    for (j = 0; j < c; j++)
    {
      cout << m[i][j] << endl;
    }
  }

  // cout<<m[10][10]<<endl;
  // cout<<n[10][10]<<endl;
}
// #include <iostream>
// using namespace std;
// int main()
// {
// int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
// cout<<"Enter the number of row=";
// cin>>r;
// cout<<"Enter the number of column=";
// cin>>c;
// cout<<"nter the first matrix element=\n";
// for(i=0;i<r;i++){
//   for(j=0;j<c;j++){
//     cin>>a[i][j];
//   }
// }
// cout<<a[i][j];
// cout<<"enter the second matrix element=\n";
// for(i=0;i<r;i++)
// {
// for(j=0;j<c;j++)
// {
// cin>>b[i][j];
// }
// }
// }
