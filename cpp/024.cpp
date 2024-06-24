#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Virtual function
    virtual void makeSound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Override the makeSound method
    void makeSound() override {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Animal abj;
    Animal *animal =&abj;
    Dog dobj;
    Animal *dog = &dobj;
    // Call makeSound method
    animal->makeSound(); // Animal makes a sound
    dog->makeSound();    // Dog barks

    // Clean up
    delete animal;
    delete dog;

    return 0;
}
