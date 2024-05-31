// Find the maximum number in a array 

#include<iostream>
using namespace std ;

int max_num(int arr[],int n){
    int max = arr[0];
     for (int i=0; i<n;i++){
       if(arr[i]>max)
       max = arr[i];
     }
     return max;
}

int main(){
    int n;
    cout<<"Enter the number size of the array : ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n;i++){
        cin>>arr[i];
    }
    int max = max_num(arr,n);
     cout<<max;
}