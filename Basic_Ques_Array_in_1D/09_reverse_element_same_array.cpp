//  write a program to reverse the element in same array without taking extra spaces 

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n/2;i++){
        int temp;
        temp= arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]= temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}