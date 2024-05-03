#include<iostream>
using namespace std;

void swap(int* a, int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
	
}

int main(){
	int a=10, b=25;
	cout<<"Before swaping a: "<<a<<" b: "<<b<<endl;
	swap(&a, &b);
	cout<<"After swaping a: "<<a<<" b: "<<b;
	
	return 0;
	
	
}