#include<iostream>
using namespace std;

int main(){
	//max size of matrix is 100
	const int max =100;
	int  matrix[max][max];
	int size, sum = 0;
	
	//taking size from user
	cout<<"Enter size of matrix: ";
	cin>>size;
	
	//making the matrix
	cout<<"Enter elements of matrix: ";
	for(int i =0; i<size; ++i){
		for(int j= 0;j<size; ++j){
			cin>>matrix[i][j];
		}
	}
	
	//print matrix
	cout<<"Matrix: "<<endl;
	for(int i =0; i<size; ++i){
		for(int j= 0;j<size; ++j){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	//sum
	for(int i = 0;  i < size; ++i){
		sum += matrix[i][i];
	}
	cout<<"Sum is "<<sum;
	
	return 0;
	
}