#include<iostream>
using namespace std;

class Animal
{
public:
    void eat(){
        cout << "Eating...";
    }
};

class Dog : public Animal{
public:
    void eat()
    {
        cout << "Eating Bread...";
    }
};

class Cow : public Animal{
public:
    void eat()
    {
        cout << "Eating Grass...";
    }
};

int main() {
    Dog dog;
    Cow cow;

    cout << "Dog: ";
    dog.eat();
    cout << endl;

    cout << "Cow: ";
    cow.eat();
    cout << endl;

    return 0;
}
