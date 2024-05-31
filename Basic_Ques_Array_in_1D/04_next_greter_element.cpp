// Find the secound largest element inthe given array 
#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of Array: ";
    cin >> n;

    if (n < 2) {
        cout << "Array should have at least two elements to find the second largest element." << endl;
        return 1;
    }

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    // Find the largest element
    for(int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Find the second largest element
    for(int i = 0; i < n; i++) {
        if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element in the array is " << secondLargest << endl;
    }

    return 0;
}
