#include <iostream>

using namespace std;

class SumCalculator {
public:
    // Method to sum two integer numbers
    int sum(int a, int b) {
        return a + b;
    }

    // Method to sum two double numbers
    double sum(double a, double b) {
        return a + b ;
    }
};

int main() {
    SumCalculator calculator;

     cout << "Sum of integers: " << calculator.sum(5, 10) << endl;
    cout << "Sum of doubles: " << calculator.sum(7.5, 10.3) << endl;

    return 0;
}
