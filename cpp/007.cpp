#include<iostream>
using namespace std;

int ls(int arr[], int size, int key){
	for(int i = 0; i < size; ++i){
		if (arr[i]==key){
			return i;
		}
		
	}
		return -1;
}

int main(){
	int size;
	cout << "Enter size of the array :";
	cin >> size;
	
	int arr[size];
	cout << "Enter "<< size <<" numbers: ";
	for(int i = 0; i<size;++i){
		cin>> arr[i];
	}
	
	int key;
	cout << "Enter number to search: ";
	cin>> key;
	
	int index = ls(arr, size, key);
	if(index != -1){
	cout <<"Found at index "<<index;
	}else{
		cout<<"Number not found in the array";
	}
	return 0;
	
}