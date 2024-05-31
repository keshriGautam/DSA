// Count the number of element in given array greter than a number x 

#include<iostream>
using namespace std ;
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int num;
    cout<<"Enter the number ";
    cin>>num;
    int arr[n];
    int count=0;
    cout<<"Enter the Element ";
    for (int i=0; i<n;i++){
       cin>>arr[i];
    }
    for (int i=0; i<n;i++){
      if(arr[i]>num) count++;
    }
    cout<<count;

}