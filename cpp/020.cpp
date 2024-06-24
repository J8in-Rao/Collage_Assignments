#include <iostream>

using namespace std;

class OpOverload {
private:
    int value;

public:
    //Constructor
    OpOverload(int a):value(a){}
    // Overloaded + operator
    OpOverload operator+(const OpOverload& b) {
    OpOverload result( value + b.value);
        return result;
    }

    void dis(){
        cout<<"Sum of value of object a and b is : "<<value;
    }

};

int main() {
    OpOverload a(5);
    OpOverload b(10);
    OpOverload c = a +b;
    c.dis();

    return 0;
}
