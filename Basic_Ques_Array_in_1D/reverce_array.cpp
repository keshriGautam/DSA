#include<iostream>
using namespace std;
int main(){
	// Write a program to reverce the array without using any extra array ;
    int n;
    cout<<"Enter The size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array element : ";
     for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0; i<n/2; i++){
        int temp;
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"Reverse Array : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}