// write a program to copy the content of one array into another array in te reverse order 

#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     int arr1[n];
    for (int i = 0; i < n; i++) {
        arr1[i] = arr[n - 1 - i]; 
         }
    for(int i =0; i<n;i++){
        cout<<arr1[i]<<" ";
    }
}