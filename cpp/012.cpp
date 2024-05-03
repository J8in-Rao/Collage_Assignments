#include<iostream>
using namespace std;

int main(){
	//intializing and taking size of array
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	
	//creating array by pointers
	int arr[size];
	cout<<"Enter "<<size<<" numbers: ";
	int* ptr = arr;
	for(int i =0; i<size; ++i){
		cin>>*(ptr+i);
	}
	//Displaying array by pointers
	
	for(int i =0; i<size; ++i){
		cout<<*(ptr+i)<<" ";
	}
	
	
	return 0;
	
}