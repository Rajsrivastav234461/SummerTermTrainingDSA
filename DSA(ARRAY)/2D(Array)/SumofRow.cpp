#include<iostream>
using namespace std;

void rowWiseSum(int arr[][3]) {
	int largest=INT_MIN;
    for (int row = 0; row < 3; row++) {
        int sum = 0;
        for (int col = 0; col < 3; col++) {
            sum += arr[row][col];
        }
        cout << "Sum of row " << row + 1 << ": " << sum << endl;
        if(sum>largest){
    	largest= sum;
    		return largest;
		}
	
    }
    
}

int main() {
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};

    rowWiseSum(arr);

    return 0;
}

