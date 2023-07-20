 #include <iostream>
 using namespace std;

void moveZeroes(int nums[], int n) {
    int j = 0; // Index to track the position for non-zero elements

    // Iterate through the array
    for (int i = 0; i < 7; i++) {
        // If the current element is non-zero, swap it with the position at 'j'
        if (nums[i] != 0) {
             swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    int nums[7] = {0, 1, 0, 3, 12, 0, 8};
    
    moveZeroes(nums, 7);

    // Output the modified array
    for (int i = 0; i < 7; i++) {
         cout << nums[i] << " ";
    }
     cout <<endl;

    return 0;
}

