#include<iostream>
using namespace std;
class average{
    public:
    int first;
    int second;
    int third;
    int avg;

    void insert(int a, int b, int c){
        first=a;
        second=b;
        third=c;        
    }

    void display(){
        avg=(first+second+third)/3;
        cout<<avg;
    }
};

int main(){
    average at;
    at.insert(2,4,6);
    at.display();
}
