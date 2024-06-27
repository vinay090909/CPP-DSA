#include <iostream>
using namespace std;

void firstocc(int arr[], int size, int key) {
    int s = 0;
    int e = size - 1;
    int result = -1;  // Variable to store the index of the first occurrence
    while (s <= e) {
        int mid = s + (e - s) / 2;  // Correct calculation of mid

        if (arr[mid] == key) {
            result = mid;  // Update result to the current mid
            e = mid - 1;   // Move to the left half to find the first occurrence
        } else if (arr[mid] < key) {
            s = mid + 1;   // Move to the right half
        } else {
            e = mid - 1;   // Move to the left half
        }
    }
    cout << result << endl;  // Print the index of the first occurrence
}

int main() {
    int arr[] = {1, 2, 3, 3, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    firstocc(arr, size, 3);
    return 0;
}
