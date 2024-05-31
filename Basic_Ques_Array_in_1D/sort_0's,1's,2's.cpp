
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	cout<<"Enter the Array element (0's , 1's &2's') : ";
	int arr[n];int zos,ons,tos;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0)zos++;
		else if(arr[i]==1) ons++;
		else if(arr[i]==2)tos++;
	}
	for(int i=0;i<n;i++){
		if(i<zos)arr[i]=0;
		else if (i<zos+ons)arr[i]=1;
		else arr[i]=2;
	}
	cout<<"Sorted Array: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	
}