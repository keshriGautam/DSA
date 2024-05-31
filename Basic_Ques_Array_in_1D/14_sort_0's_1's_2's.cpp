#include <iostream>
using namespace std;

void display(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int arr[], int n) {
    int zros = 0, ons = 0, twos = 0;
     
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) zros++;
        else if(arr[i] == 1) ons++;
        else if(arr[i] == 2) twos++;
    }
     
    int i = 0;
    while(zros > 0) {
        arr[i++] = 0;
        zros--;
    }
    while(ons > 0) {
        arr[i++] = 1;
        ons--;
    }
    while(twos > 0) {
        arr[i++] = 2;
        twos--;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Original array: ";
    display(arr, n);
    
    sort012(arr, n);
    
    cout << "Sorted array: ";
    display(arr, n);
    
    return 0;
}
