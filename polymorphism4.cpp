#include <iostream>
#include <string>

using namespace std;

class Fruit {
public:
    virtual void display() const = 0;
};

class Apple : public Fruit {
public:
    void display() const override {
        cout << "This is an Apple" << endl;
    }
};

class Banana : public Fruit {
public:
    void display() const override {
        cout << "This is a Banana" << endl;
    }
};

class Orange : public Fruit {
public:
    void display() const override {
        cout << "This is an Orange" << endl;
    }
};

int main() {
    Fruit *fruit1 = new Apple();
    Fruit *fruit2 = new Banana();
    Fruit *fruit3 = new Orange();

    fruit1->display();
    fruit2->display();
    fruit3->display();

    delete fruit1;
    delete fruit2;
    delete fruit3;

    return 0;
}