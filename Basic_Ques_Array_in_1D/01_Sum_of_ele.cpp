// Calculate the sum of all the element in aarray 

#include<iostream>
using namespace std ;

int sum_of_element(int arr[],int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
int n;
cout<<"Enter the size of Array :  ";
cin>>n;
int arr[n];
for(int i=0; i<n;i++){
    cin>>arr[i];
}
int sum = sum_of_element(arr,n);
cout<<"sum of the element in array is "<<sum<<endl;
return 0;
}
