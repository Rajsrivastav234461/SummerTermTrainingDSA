#include<iostream>
using namespace std;

int LastOcc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int mid;
    int ans = -1;

    while (s <= e) {
        mid = (s + e) / 2;

        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};
    //int size = sizeof(arr) / sizeof(arr[0]);
      LastOcc(arr,6, 3);
     cout << "The occurrence of the last element is: " << LastOcc(arr,6,3) << endl;
     

    return 0;
}

