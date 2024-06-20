#include <iostream>
#include <limits.h> // For INT_MIN
using namespace std;
int findSecondLargest(int arr[], int n) {
    if (n < 2) {
        std::cout << "Array should have at least two elements." << endl;
        return INT_MIN;
    }

    int first = INT_MIN;
    int second = INT_MIN;

    // Find the largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            first = arr[i];
        }
    }

    // Find the second largest element
    for (int i = 0; i < n; i++) {
        if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int arr[] = {1,3,4,9,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    if (result == INT_MIN) {
        cout << "No second largest element found." <<  endl;
    } else {
        cout << "The second largest element is " << result << endl;
    }

    return 0;
}
