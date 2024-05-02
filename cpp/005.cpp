#include<iostream>
using namespace std;

unsigned long long int factorial(unsigned long long int n){
    if (n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }

}


int main(){
    unsigned long long int num, fact;
    cout<<"Enter Number : ";
    cin>>num;
    fact = factorial(num);
    cout<<"Factorial of "<< num <<" is "<<fact;
    return 0;
}