#include<iostream>
#include<bitset>
using namespace std;
int main(){

    int x=172;
    int y= x & ~(x-1);

    cout<<"a = " <<bitset<8>(x)<< " = "<<x<<endl;
    cout<<"b = " <<bitset<8>(x-1)<< " = "<<x-1<<endl;
    cout<<"c = " <<bitset<8>(~(x-1))<< " = "<<(~(x-1))<<endl;
    cout<<"d = " <<bitset<8>(y)<< " = "<<y<<endl;





}
