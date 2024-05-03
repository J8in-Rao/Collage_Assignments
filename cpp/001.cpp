#include<iostream>
using namespace std;

int main(){
    int a = 50;
    cout<<"Value of a: "<<a<<endl;
    int& b = a;
    cout<<"value of a by refrence: "<<b;
    return 0;
}