#include<iostream>
using namespace std;

int main(){
    int units;
    int cost=0;
    
    cout <<"Enter the units: ";
    cin >> units;

    if(units<=100){
        cost = 200;
    }

     else if(units<=200){
        cost = 200 + (units-100)*2;
    }

     else if(units<=300){
        cost = 200 + (units-200)*3;
    }

     else if(units<=400){
        cost = 200 + (units-300)*5;
    }

     else if (units>400) {
        cost = 200 + (units-400)*7;
    }

    cout << "Total cost: " << cost + 200 << endl;
    return 0;
}
