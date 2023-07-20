 #include <iostream>
using namespace std;

int searchInRotatedArray(int arr[], int n, int key) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;  // Return the index where the key is found
        }

        // Check if the left half is sorted
        if (arr[low] <= arr[mid]) {
            // Check if the key lies within the left sorted half
            if (key >= arr[low] && key < arr[mid]) {
                high = mid - 1;  // Search in the left half
            } else {
                low = mid + 1;  // Search in the right half
            }
        }
        // Otherwise, the right half is sorted
        else {
            // Check if the key lies within the right sorted half
            if (key > arr[mid] && key <= arr[high]) {
                low = mid + 1;  // Search in the right half
            } else {
                high = mid - 1;  // Search in the left half
            }
        }
    }

    return -1;  // Return -1 if the key is not found
}

int main() {
    int arr[] = {7, 9, 1, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 5;

    int index = searchInRotatedArray(arr, n, key);

    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}

