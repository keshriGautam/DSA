#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;  

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    int sum;
    cout << "Enter the number whose sum is to be found: ";
    cin >> sum;  

    bool found = false; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  
            if (arr[i] + arr[j] == sum) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "No such pairs found." << endl;
    }

    return 0;
}
