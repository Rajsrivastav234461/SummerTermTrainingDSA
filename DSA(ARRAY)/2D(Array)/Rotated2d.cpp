#include <iostream>
using namespace std;
const int N = 3; // Size of the 2D array

void rotateArray90(int arr[N][N]) {
    // Transpose the array
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Reverse each row
    for (int i = 0; i < N; i++) {
        for (int j = 0, k = N - 1; j < k; j++, k--) {
            swap(arr[i][j], arr[i][k]);
        }
    }
}

void printArray(int arr[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }
}

int main() {
    int arr[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Original array:" << std::endl;
    printArray(arr);

    rotateArray90(arr);

    cout << "Rotated array:" << std::endl;
    printArray(arr);

    return 0;
}

