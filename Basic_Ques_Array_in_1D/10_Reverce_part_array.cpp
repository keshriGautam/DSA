// write a program to revercea part of a array 

#include<iostream>
using namespace std;

void display(int arr[],int n){
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse_part(int arr[],int i, int j){
    while(i<=j){
       int temp= arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    return;
}

void reverse(int arr[],int n){
    int i=0;
    int j = n-1;
    while(i<j){
       int temp= arr[i];
        arr[i]= arr[j];
        arr[j]=temp;
        i++;
        j--;
      
    }return;
}

int main(){
    int n;
    cout<<"Enter size of a array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the element : ";
    for(int i =0 ; i<n;i++){
        cin>>arr[i];
    }
        display(arr,n);
        reverse(arr,n);
        display(arr,n);
        reverse_part(arr,0,5);
        display(arr,n);

}