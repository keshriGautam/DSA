//#include<iostream>
//using namespace std;
//int main(){
//	int n;
//	cout<<"Enter the size of Array : ";
//	cin>>n;
//	cout<<"Enter the array Element ( 0's and 1's) : ";
//		int noz=0,noo=0;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//		if(arr[i]==0){noz++;
//		}
//		else noo++;
//	}
//   for(int i=0;i<n;i++){
//   	if(i<noz) arr[i]=0;
//   	else arr[i]= 1;   }
//   	
//   	for(int i=0;i<n;i++){
//   		cout<<arr[i]<<" ";
//	   }
//	
//}

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
		i++;
		j--;
	}
	cout<<"Sorted Array : ";
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}