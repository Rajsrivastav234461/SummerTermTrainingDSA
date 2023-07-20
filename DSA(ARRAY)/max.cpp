#include <iostream>
using namespace std;

int findLargestElement(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    int arr[] = {5, 9, 2, 18, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int largestElement = findLargestElement(arr, size);

    cout << "The largest element in the array is: " << largestElement << endl;

    return 0;
}

