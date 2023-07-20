 #include<iostream>
using namespace std;

void spiralPrint(int arr[][3], int row, int col) {
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    while (topRow <= bottomRow && leftCol <= rightCol) {
        // Print top row
        for (int i = leftCol; i <= rightCol; i++) {
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Print right column
        for (int i = topRow; i <= bottomRow; i++) {
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Print bottom row
        if (topRow <= bottomRow) {
            for (int i = rightCol; i >= leftCol; i--) {
                cout << arr[bottomRow][i] << " ";
            }
            bottomRow--;
        }

        // Print left column
        if (leftCol <= rightCol) {
            for (int i = bottomRow; i >= topRow; i--) {
                cout << arr[i][leftCol] << " ";
            }
            leftCol++;
        }
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    spiralPrint(arr, 3, 3);

    return 0;
}
 




















