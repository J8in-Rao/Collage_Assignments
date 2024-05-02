#include<iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    if (  n <= 1){
        return false;
    }else{
        for(int i = 2; i <= sqrt(n); ++i){
            if (n % i == 0){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int num;
    cout<<"Enter number :";
    cin>>num;
    if (prime(num)) {
        cout<<"Number is prime";
    }    else {
        cout<<"Number is not prime";
    }
    return 0;
}