#include<iostream>
using namespace std;

void reverseMatrix(int arr[],int n){
    for (int i = n-1; i >=0; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
int main(){
int arr[50];
int n;
cout<<"Enter the size of array";
cin>>n;
cout<<"Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
reverseMatrix(arr,n);
cout<<"this is the reversed array";
    return 0;

}