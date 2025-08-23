#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore();
    char arr[10][100]; 
    cout << "Enter strings:\n";
    for (int i = 0; i < n; i++) {
        cin.getline(arr[i], 100);
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int k = 0;
            while (arr[i][k] != '\0' && arr[j][k] != '\0' && arr[i][k] == arr[j][k]) {
                k++;
            }
            if (arr[i][k] > arr[j][k]) {
                char temp[100];
                int m = 0;
                while (arr[i][m] != '\0') {
                    temp[m] = arr[i][m];
                    m++;
                }
                temp[m] = '\0';
                m = 0;
                while (arr[j][m] != '\0') {
                    arr[i][m] = arr[j][m];
                    m++;
                }
                arr[i][m] = '\0';
                m = 0;
                while (temp[m] != '\0') {
                    arr[j][m] = temp[m];
                    m++;
                }
                arr[j][m] = '\0';
            }
        }
    }
    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
