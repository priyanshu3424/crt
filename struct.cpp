#include<iostream>
using namespace std;

struct rectangle {
    int width, height;
    int a[10];
};

int main() {
    struct rectangle rec; 
    rec.width = 8;        
    rec.height = 5;
    cout << "Area of Rectangle is: " << (rec.width * rec.height) << endl;
    return 0;
}
