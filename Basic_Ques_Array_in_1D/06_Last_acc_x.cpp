// Find the last occurance of X in the array 

#include<iostream>
using namespace std; 
int main(){
int n;
cout<<"Enter the size of a array : ";
cin>>n;
int num;
cout<<"Enter the number : ";
cin>>num;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int occ;
for(int i=0; i<n;i++){
if(arr[i]==num)
occ= i;
}
cout<< occ;

}