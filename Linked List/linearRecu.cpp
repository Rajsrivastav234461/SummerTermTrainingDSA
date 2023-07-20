 #include <iostream>
using namespace std;

bool PrintArray(int arr[], int key, int n) {
    // Base case
    if (n == 0) {
        return false;
    }

    if (arr[0] == key) {
        return true;
    } else {
        bool remainingPart = PrintArray(arr + 1, key, n - 1);
        return remainingPart;
    }
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key = 20;
    int n = 5;
    bool isPresent = PrintArray(arr, key, n);
    if (isPresent) {
        cout << "Element is found." << endl;
    } else {
        cout << "Element is not found." << endl;
    }

    return 0;
}

