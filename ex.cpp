#include <iostream>
using namespace std;

void duplicate(int arr[], int size) {
    bool foundDuplicate = false;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++){
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                foundDuplicate = true;
                break; // Optionally, break to avoid printing the same duplicate multiple times
            }
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 3, 5 ,4 ,4 , 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    duplicate(arr, size);

    return 0;
}
