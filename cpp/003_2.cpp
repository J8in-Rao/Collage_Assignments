#include<iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Enter the Number: ";
    cin >> num;
    
    for (int j = 1; j <= num; ++j) {
        if (num % j == 0) {
            count++;
        }
    }

    if (count == 2) {
        cout << "The number is prime";
    } else {
        cout << "The number is not prime";
    }

    return 0;
}
