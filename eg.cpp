#include <iostream>
using namespace std;

class Animal {
public:
    // Virtual function for run-time polymorphism
    virtual void sound() {
        cout << "Animal makes a sound!" << endl;
    }
};

class Dog : public Animal {
public:
    // Overriding the base class function
    void sound() {
        cout << "Dog barks!" << endl;
    }
};

class Cat : public Animal {
public:
    // Overriding the base class function
    void sound(){
        cout << "Cat meows!" << endl;
    }
};

int main() {
    // Pointer to the base class
    Animal* animal;
    
    Dog dog;
    Cat cat;
    dog.sound();
    // Run-time polymorphism
    animal = &dog;
    animal->sound();  // Output: Dog barks!
    cat.sound();
    animal = &cat;
    animal->sound();  // Output: Cat meows!

    return 0;
}
