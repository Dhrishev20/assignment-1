#include <iostream>
using namespace std;
#define MAX 100
void display(int T[MAX][3]) {
    int n = T[0][2];
    cout << "Row Col Val\n";
    for (int i = 0; i <= n; i++) {
        cout << T[i][0] << "   " << T[i][1] << "   " << T[i][2] << endl;
    }
    cout << endl;
}
void transpose(int A[MAX][3], int B[MAX][3]) {
    int rows = A[0][0], cols = A[0][1], n = A[0][2];
    B[0][0] = cols;
    B[0][1] = rows;
    B[0][2] = n;

    int k = 1;
    for (int c = 0; c < cols; c++) {
        for (int i = 1; i <= n; i++) {
            if (A[i][1] == c) {
                B[k][0] = A[i][1];
                B[k][1] = A[i][0];
                B[k][2] = A[i][2];
                k++;
            }
        }
    }
}
void add(int A[MAX][3], int B[MAX][3], int C[MAX][3]) {
    if (A[0][0] != B[0][0] || A[0][1] != B[0][1]) {
        cout << "Matrix dimensions do not match!\n";
        return;
    }

    int n1 = A[0][2], n2 = B[0][2];
    int i = 1, j = 1, k = 1;
    C[0][0] = A[0][0];
    C[0][1] = A[0][1];

    while (i <= n1 && j <= n2) {
        if (A[i][0] < B[j][0] || (A[i][0] == B[j][0] && A[i][1] < B[j][1])) {
            C[k][0] = A[i][0];
            C[k][1] = A[i][1];
            C[k][2] = A[i][2];
            i++; k++;
        } else if (B[j][0] < A[i][0] || (B[j][0] == A[i][0] && B[j][1] < A[i][1])) {
            C[k][0] = B[j][0];
            C[k][1] = B[j][1];
            C[k][2] = B[j][2];
            j++; k++;
        } else {
            int sum = A[i][2] + B[j][2];
            if (sum != 0) {
                C[k][0] = A[i][0];
                C[k][1] = A[i][1];
                C[k][2] = sum;
                k++;
            }
            i++; j++;
        }
    }

    while (i <= n1) {
        C[k][0] = A[i][0];
        C[k][1] = A[i][1];
        C[k][2] = A[i][2];
        i++; k++;
    }
    while (j <= n2) {
        C[k][0] = B[j][0];
        C[k][1] = B[j][1];
        C[k][2] = B[j][2];
        j++; k++;
    }

    C[0][2] = k - 1;
}


void multiply(int A[MAX][3], int B[MAX][3], int C[MAX][3]) {
    if (A[0][1] != B[0][0]) {
        cout << "Matrix dimensions do not allow multiplication!\n";
        return;
    }

    int rows = A[0][0], cols = B[0][1];
    int temp[MAX][MAX] = {0};

    for (int i = 1; i <= A[0][2]; i++) {
        for (int j = 1; j <= B[0][2]; j++) {
            if (A[i][1] == B[j][0]) {
                temp[A[i][0]][B[j][1]] += A[i][2] * B[j][2];
            }
        }
    }

    C[0][0] = rows;
    C[0][1] = cols;
    int k = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (temp[i][j] != 0) {
                C[k][0] = i;
                C[k][1] = j;
                C[k][2] = temp[i][j];
                k++;
            }
        }
    }
    C[0][2] = k - 1;
}

int main() {
    int A[MAX][3] = {
        {3, 3, 3},
        {0, 2, 5},
        {1, 1, 8},
        {2, 0, 3}
    };
    int B[MAX][3] = {
        {3, 3, 3},
        {0, 2, 4},
        {1, 0, 6},
        {2, 2, 7}
    };

    int T[MAX][3], C[MAX][3];

    cout << "Matrix A in triplet form:\n"; display(A);
    cout << "Matrix B in triplet form:\n"; display(B);

   
    transpose(A, T);
    cout << "Transpose of A:\n"; display(T);
    add(A, B, C);
    cout << "A + B:\n"; display(C);
    multiply(A, B, C);
    cout << "A * B:\n"; display(C);
    return 0;
}
