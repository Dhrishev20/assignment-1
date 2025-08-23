#include<iostream>
using namespace std;

int main(){
int p,q;
cout<<"enter the no. of rows and columns";
cin>>p>>q;

int A[50][50],B[50][50];

cout<<"enter the elements of the matrix"<<endl;
for (int i = 0; i < p; i++)
{
    for (int j = 0; j < q; j++)
    {
        cin>>A[i][j];
}
}
for (int i = 0; i < q; i++)
{
    for (int j = 0; j < p; j++)
    {
       cout<<B[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}