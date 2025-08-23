#include<iostream>
using namespace std ;

void create(int arr[], int &n){
    cout<<"enter the size of the array"<<endl;
    cin>>n;
        cout<<"enter the arr"<<endl;
        for ( int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
      }
      
      void display(int arr[],int n){
        for (int  i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
      }

     void insert(int arr[],int &n){
        int element , position;
        cout<<"enter the element and position"<<endl;
        cin>>position;
        cin>>element;
      for (int i = n; i > position; i--)
      {
    arr[i] = arr[i-1];
      }
    arr[position]= element;
    n++;
      } 

      void remove(int arr[],int &n){
     int position ;
    cout<<"enter the position"<<endl;
    cin>>position;
     for (int i = position; i<n-1; i++)
     {
        arr[i]=arr[i+1];
     }
     n--;
 }

 void linear_search(int arr[],int n){
    int element;
    cout<<"enter the element"<<endl;
    cin>>element;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==element){
           cout<<i;
        }    
    }
  cout<<"element not found"<<endl;
 }

      int main(){
int arr[90];
int n=0;
int menu;
do
{
    cin>>menu;

switch (menu)
{
case 1: create(arr,n);
    break;
    case 2: display(arr,n);
    break;
    case 3: insert(arr,n);
    break;
    case 4: remove(arr,n);
    break;
    case 5: linear_search(arr,n);
    break;
    case 6: cout<<"exit";
    break;
default:
    break;
}
}
while (menu!=6);
    return 0;
 }