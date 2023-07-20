 #include<iostream>
using namespace std;

 int Binary_Search(int arr[],int start,int end,int key){
while(start<=end){
int mid=(start+end)/2; 
if(arr[mid]==key){
	return mid;
}
if(arr[mid]<key){
start=mid+1;}
else {
  end=mid-1;
	}
	}
    return -1;}
                     


int main() {
    int arr[6] = {1, 2, 3, 3, 4, 5};
    int key;
    cin >> key;
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = Binary_Search(arr, 0, n - 1, key);
      if (index != -1) {
        cout << "Element " << key << " found at index " << index << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

 
    return 0;
}

