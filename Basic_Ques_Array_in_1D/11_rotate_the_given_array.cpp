  // Rotate the given array a by k steps steps where k is non negative 

#include<iostream>
using namespace std ;

void display(int arr[],int n){
 for(int i =0;i<n;i++){
    cout<<arr[i]<<" ";
 }
 cout<<endl;
 
}
void reverse(int arr[],int i, int j){
    while(i<j){
        int temp= arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the rotation : ";
    int k ;
    cin>>k;
    int arr[n];
    cout<<"Enter the element : ";
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    display(arr,n);
    reverse(arr,0,n-1-k);
    display(arr,n);
    reverse(arr,n-k,n-1);
    display(arr,n);
    reverse(arr,0,n-1);
    display(arr,n);
}