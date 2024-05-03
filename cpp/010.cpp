#include<iostream>
using namespace std;

void ao(int* a, int* b){
	cout<<"Addition of these numbers is: "<<*a + *b<<endl;
	cout<<"Subtraction of these numbers is: "<<*a - *b<<endl;
	cout<<"Multiplication of these numbers is: "<<*a * *b<<endl;
	if(*b!=0){
	cout<<"Divison of these numbers is: "<<*a / *b<<endl;
	}else{
		cout<<"Divison of 0 is not defined";
	}
	
}

int main(){
	int num1, num2;
	cout<<"Enter 2 numbers: ";
	cin>>num1>>num2;
	//by the method of decraling pointers
//	int* ptr1 = &num1;
//	int* ptr2 = &num2;
//	ao(ptr1, ptr2);

	//direct method
	ao(&num1, &num2);
	
	return 0;
	
}