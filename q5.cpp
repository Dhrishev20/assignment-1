#include <iostream>
using namespace std;

int main() { 
int m,n;
cout<<"enter the number of rows and columns";
cin>>n>>m;

int A[50][50];

cout<<"enter the elements of matrix"<<endl;
for (int i = 0; i<m; i++)
{
    for (int j = 0; j < n; j++)
    {
        cin>>A[i][j];
    }
    
}
cout<<"sum of each row"<<endl;
for (int i = 0; i < m; i++)
{
    int rowsum = 0;
    for (int j = 0; j < n; j++)
    {
       rowsum += A[i][j];
    }
    cout<<"row"<<i+1<<"="<<rowsum<<endl;
}

cout<<"sum of each column"<<endl;
for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout<<"Column"<<j+1<<"="<<colSum<< endl;
    }

    return 0;
}
 