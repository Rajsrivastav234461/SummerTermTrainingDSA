#include <iostream>
using namespace std;
int arraySum(int arr[] ,int ind, int size ) {
    // Base case 
    if (ind == size) {
         break;
    }

    
    return arr[ind] + arraySum(arr,ind + 1 , size );
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    //int size = sizeof(arr) / sizeof(arr[0]);

    int sum = arraySum(arr, 0, 5);
    cout << "Sum of array elements" << sum << endl;

    return 0;
}

