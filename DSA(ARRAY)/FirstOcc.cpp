 #include<iostream>
using namespace std;

int FirstOcc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int mid = (s + e) / 2;
    int ans = -1;

    while (s <= e) {
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1;
        }
        else if (key > arr[mid]) {
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};
    //int size = sizeof(arr) / sizeof(arr[0]);
     FirstOcc(arr, 6, 3);
    cout <<"The occurrence of the first element is: " <<FirstOcc(arr,6,3) << endl;
      
    return 0;
}

