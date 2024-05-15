#include<iostream>
using namespace std;
void foo() {
    static int count = 0;
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    foo(); // Output: Count: 1
    foo(); // Output: Count: 2
    foo(); // Output: Count: 3
    return 0;
}
