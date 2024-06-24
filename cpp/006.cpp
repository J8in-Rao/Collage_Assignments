#include<iostream>
using namespace std;

inline int great(int n1, int n2, int n3){
	
	return (n1 > ((n2 > n3 )? n2:n3) ? n1 : (n2 > n3 )? n2:n3);
}

int main(){
	int a, b, c;
	cout<<"Enter three Numbers: ";
	cin>>a>>b>>c;
	cout<<"Greatest number is "<<great(a, b, c);
	return 0;
	
}