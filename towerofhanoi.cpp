#include <iostream>
using namespace std;

void moveDisk(int disk, char fromRod, char toRod) {
    cout <<"Move disk "<<disk <<" from "<< fromRod <<"to"<<toRod<<endl;
}
void towerOfHanoi(int n,char fromRod,char toRod,char auxRod) {
    if (n==1) {
        moveDisk(n, fromRod, toRod);
        return;
    }
    towerOfHanoi(n-1, fromRod, auxRod, toRod);
    moveDisk(n, fromRod, toRod);
    towerOfHanoi(n-1, auxRod, toRod, fromRod);
}
int main() {
    int n=3; 
    towerOfHanoi(n,'A','C','B'); 
    return 0;
}
