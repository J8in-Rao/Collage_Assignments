#include<iostream>
using namespace std;

bool leap(int n){
	if((n%4==0 && n%100!=0) || n%400==0){
		return true;
	}else{
		return false;
	}
}

int main(){
	int year;
	cout<<"Enter year to check: ";
	cin>>year;
	if(leap(year)){
		cout<<"The year is leap";
	}else{
		cout<<"The year is not leap";
	}
	return 0;
}