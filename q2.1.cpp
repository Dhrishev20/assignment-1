#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i; 
    }
    return -1; 
}
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; 

        if (arr[mid] == key)
            return mid; 
        else if (arr[mid] < key)
            left = mid + 1; 
        else
            right = mid - 1; 
    }
    return -1;
}

int main(){
    int n;
    int key;
    cout<<"enter size of array";
    cin>>n;

    int arr[50];
    cout<<"enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter element to find";
    cin>>key;

    int Lresult = linearSearch(arr,n,key);
    if (Lresult != -1){
    
       cout << "Element found at index "<<Lresult<< endl;
    }
    else
        cout << " Element not found" << endl;
    
    int bresult = binarySearch(arr,n,key);
        if (bresult != -1){
        cout << "Element found at index "<<bresult<< endl;
        }
        else
        cout<<"Element not found"<< endl;
return 0;
}