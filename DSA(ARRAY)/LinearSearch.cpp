 #include <iostream>
using namespace std;

// Function to perform linear search in a 2D array
bool linearSearch(int arr[][3], int n, int key) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == key) {
                return true;  // Return true if the key is found
            }
        }
    }
    return false;  // Return false if the key is not found
}

int main() {
    int arr[3][3] = {{5, 2, 3}, {9, 1, 2}, {5, 7, 5}};
    int n = 3;  // Number of rows

    int key = 5;
    bool found = linearSearch(arr, n, key);

    if (found) {
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

