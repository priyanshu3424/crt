#include<iostream>
using namespace std;
class MyClass {
public:
    static void myStaticFunction() {
        cout << "Static function" << endl;
    }
};

int main() {
    MyClass::myStaticFunction(); 
    return 0;
}
