 #include <iostream>
using namespace std;
void mergeArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0; // Index for arr1
    int j = 0; // Index for arr2
    int k = 0; // Index for merged array

    // Compare elements from both arrays and place them in the merged array
    while (i < 4 && j < 3) {
        if (arr1[i] <= arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from arr1, if any
    while (i < 4) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy any remaining elements from arr2, if any
    while (j < 3) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int arr1[4] = {1, 3, 5, 7};
 
    int arr2[3] = {2, 4, 6};
 
    int merged[4 + 3];

    mergeArrays(arr1, 4, arr2, 3, merged);

    // Output the merged array
    for (int i = 0; i < 4 + 3; i++) {
         cout << merged[i] << " ";
    }
     cout <<endl;

    return 0;
}

