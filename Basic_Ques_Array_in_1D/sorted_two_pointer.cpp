#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter the Array element (0's & 1's) : ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0,j=n-1;
	while(i<j){
		if(j==1) j--;
		if(i==0) i++;
		if(arr[j]==0&&arr[i]==i){
			arr[i]=0;
			arr[j]=1;
		}
	}
	cout<<"Sorted Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}