#include<iostream>
using namespace std;

class abc {
    int num; 
public:
    abc() {
        cout << "Default constructor\n";
    }
    abc(int n) {
        cout << "Parameterized Constructor";
        num = n;
    }
};

int main() {
    abc o1;
    abc o2(50);
    return 0;
}
