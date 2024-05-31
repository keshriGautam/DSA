#include<iostream>
using namespace std;
int main(){
	//find the last occurance of X in the array 
	while(1){
	
	int n;
	cout<<"Enter the Number of element in Array : "<<ends;
	cin>>n;
	int arr[n];
	cout<<"Enter the element of Array : ";
	for(int i =0 ; i<n; i++){
		cin>>arr[i];
	}
	int Lt_occr , indx = -1; 
	cout<<"Enter the Number find whose last Occurance : ";
	cin>>Lt_occr;
	for(int i =0 ; i<n ; i++){
		if(arr[i]==Lt_occr){
			indx = i;
		}
	}
	
	cout<<"The Index of Last occurance ("<< Lt_occr<< ") is "<<indx <<endl;
	cout<<".............................."<<endl ;
	cout<<endl;
	
}
	
}