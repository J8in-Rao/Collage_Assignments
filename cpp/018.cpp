#include <iostream>

using namespace std;

// Function to sum two integer numbers
int sum(int a, int b) {
    return a + b;
}

// Function to sum three integer numbers
int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    int num1, num2, num3;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum of " << num1 << " and " << num2 << " is: " << sum(num1, num2) << endl;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Sum of " << num1 << ", " << num2 << " and " << num3 << " is: " << sum(num1, num2, num3) << endl;

    return 0;
}
