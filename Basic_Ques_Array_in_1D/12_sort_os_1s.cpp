 // sort the array of 0's and 1's

#include<iostream>
using namespace std;

void display(int arr[],int n){
 for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 
}

void sort(int arr[],int n){
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]==0)i++;
        if(arr[j]==1)j--;
        if(arr[i]==1 && arr[j==0]){
            int temp = arr[i];
            arr[i]= arr[j];
            arr[j]=temp;
        }
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    sort(arr,n);
    display(arr,n);
}