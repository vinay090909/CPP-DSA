#include<iostream>
using namespace std;

void printarr(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void Maxvalue(int arr[], int n) {
    int maxvalue = arr[0]; // Initialize to the first element of the array
    for(int i = 1; i < n; i++) { // Start from the second element
        if(arr[i] > maxvalue) {
            maxvalue = arr[i];
        }
    }
    cout << "Maximum value is: " << maxvalue << endl;
}

int main() {
    int arr[] = {1, 4, 2, 5, 3};
  //  int size = sizeof(arr) / sizeof(arr[0]);
    printarr(arr, 5);
    Maxvalue(arr, 5);
    return 0;
}
