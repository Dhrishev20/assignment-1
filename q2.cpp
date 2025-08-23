#include<iostream>
using namespace std;
void remove_dupicate(int arr[],int n){
    cout<<"enter the array and size"<<endl;
   
    for (int i = 0; i < n; i++)
    {
          cin>>arr[i];       
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (arr[i]==arr[j])
           {
            for (int k = j; k<n-1; k++)
            {
                arr[k]= arr[k+1];
            }
            n--;
           }
           else{
            j++;
           }
        }
    }
}
int main(){
    int arr[50];
    int n;
    cout<<"Enter the size oof array";
    cin>>n;
    cout<<"Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    remove_dupicate(arr,n);;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    cout<<"this is the required array";
    
 return 0;
}