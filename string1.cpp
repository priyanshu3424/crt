#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello, World!";  
    string str2("Hello, C++!");     
    string str3 = str1;             
    string str4(5, 'a');          

    cout << str1 << endl;  
    cout << str2 << endl;  
    cout << str3 << endl;  
    cout << str4 << endl;  

    return 0;
}
