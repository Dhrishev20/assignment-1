#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int left = 0, right = n-2;
    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == mid + 1) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left + 1; 
}
int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 6}; 
    cout<<"Missing element"<<findMissingBinary(arr, n)<<endl;
    return 0;
}
