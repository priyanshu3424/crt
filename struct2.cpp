#include <iostream>

using namespace std;

struct AValue {
    int input;
    int output;
};

int main() {
    AValue value;
    
    cout << "Enter a number: ";
    cin >> value.input;
    
    if (value.input < 0) {
        value.output = -value.input;
    } else {
        value.output = value.input;
    }
    
    cout << "A value of " << value.input << " is " << value.output << endl;
    
    return 0;
}
