#include<iostream>
using namespace std;

void leapYear(int n){
    if ((n%4 == 0 && n% 100!= 0) || n%400 == 0)
        cout<<"This is a leap year";
    else
    cout<<"This is not a leap year";
    
}

int main(){
    int y;
    cout<<"Enter year: ";
    cin>>y;
    leapYear(y);

    return 0;
}