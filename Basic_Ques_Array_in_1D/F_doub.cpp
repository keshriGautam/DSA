#include<iostream>
using namespace std ;
int main(){
	while(1){
		//Find the doublet in the arrat whose sum is equal to the given value x
		int n;
		cout<<"Enter the Size of Array : ";
		cin>>n;
		int arr[n];
		cout<<"Enter the number Array element :";
		for(int i =0; i<n;i++){
			cin>>arr[i];
		}
		int F_doub  ;
		cout<<"Enter the Number whose sum doublet : ";
		cin>>F_doub;
		for(int i = 0; i<n; i++){
			for(int j=i+1 ; j<n;j++){
				if(arr[i]+arr[j]==F_doub){
					cout<<"("<<i<<","<<j<<")"<<endl;
				}
			}
		}
		
		
	}
}