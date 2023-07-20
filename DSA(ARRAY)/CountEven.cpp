 #include <iostream>
using namespace std;

int countEven(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2!= 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int numbers[] = {1, 3, 5, 7, 8, 9, 11};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int evenCount = countEven(numbers, size);

    if (evenCount > 0)
    {
        cout << "The array contains " << evenCount << " even number(s)." << endl;
    }
    else
    {
        cout << "The array does not contain any even numbers." << endl;
    }

    return 0;
}

