#include<iostream>
using namespace std;

int main(){
int a,b,c,d;

cout<<"Enter the rows and columns of first matrix";
cin>>a>>b;
cout<<"Enter the rows and columns of second matrix";
cin>>c>>d;

   if(b != c){
    cout<<"Multiplication not possible"<<endl;
    return ;
}
   int A[50][50], B[50][50], C[50][50] = {0} ;

     cout<<"enter elements of first matrix"<<endl;
for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        cin>>A[i][j];
    }

}
  cout<<"enter elements of first matrix"<<endl;
    for (int i = 0; i < a; i++)
{
    for (int j = 0; j < b; j++)
    {
        cin>>A[i][j];
    }

}
     cout<<"enter elements of second matrix"<<endl;
        for (int i = 0; i < c; i++)
{
    for (int j = 0; j < d; j++)
    {
        cin>>B[i][j];
    }

}

    for (int i = 0; i < a; i++)
{
      for (int j = 0; j < d; i++)
    {
        C[i][j] = 0;
 for (int k = 0; k < b; k++)
        {
            C[i][j] += A[i][k]*B[k][j];
        }
        
    }
    
}

for (int i = 0; i < a; i++)
{
    for (int j = 0; j < c; j++)
    {
        cout<<C[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}