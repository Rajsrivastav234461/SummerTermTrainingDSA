 #include<iostream>
using namespace std;

int findRowWithLargestSum(int arr[][3]) {
    int maxSum = INT_MIN; // Variable to store the maximum sum
    int maxRow = -1;      // Variable to store the row index with the maximum sum

    for (int row = 0; row < 3; row++) {
        int sum = 0; // Variable to store the sum of the current row

        for (int col = 0; col < 3; col++) {
            sum += arr[row][col]; // Accumulate the sum of the current row
        }

        if (sum > maxSum) {
            maxSum = sum; // Update the maximum sum
            maxRow = row; // Update the row index with the maximum sum
        }
    }

    return maxRow;
}

int main() {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    int rowWithLargestSum = findRowWithLargestSum(arr);

    if (rowWithLargestSum != -1) {
        cout << "Row " << rowWithLargestSum + 1 << " has the largest sum." << endl;
    } else {
        cout << "No rows in the array." << endl;
    }

    return 0;
}

