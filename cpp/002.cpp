#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1, nextTerm;
    
    cout << "Fibonacci Series up to " << n << " terms: ";
    
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main() {
    int numTerms;
    
    cout << "Enter the number of terms for Fibonacci Series: ";
    cin >> numTerms;
    
    fibonacci(numTerms);
    
    return 0;
}
