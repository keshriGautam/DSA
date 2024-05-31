// Find the element x in the array take array and x as input and return index number 

#include<iostream>
using namespace std ;

void Find_x(int arr[],int n, int num){
     for(int i=0;i<n;i++){
        if(arr[i]==num){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter the size of Array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cout<<"Enter the target element to find :";
    cin>>num;
    Find_x(arr,n,num);
    return 0;
}