#include <iostream>
using namespace std;

// Base class
class Animal {
public:
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
    Animal animal;
    Dog dog;

    // Call the makeSound method of the Animal class
    animal.makeSound();

    // Call the makeSound method of the Dog class (overridden method)
    dog.makeSound();

    return 0;
}
