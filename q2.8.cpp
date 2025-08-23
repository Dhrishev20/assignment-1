#include <iostream>
using namespace std;
int countDistinct(int arr[],int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
     bool seen = false;
        for (int j = 0; j < i; j++) {
    if (arr[i] == arr[j]) {
                seen = true;
                break;
        }
        }
 if (!seen) count++;
    }
    return count;
}
int main() {
 int arr[] = {1, 2, 2, 3, 4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Total distinct elements = " << countDistinct(arr, n) << endl;
return 0;
}
