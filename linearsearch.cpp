#include<iostream>
using namespace std;
int search(int array[] ,int n,int x)
{
    int i;
    for(i = 0;i < n;i++){
        if(array[i] == x)
        {
            return x;
        }
    }
    return -1;
    
}
int main()
{
    int array[] = {2,4,0,1,9};
    int x = 4;
    int n = sizeof(array) / sizeof(array[0]);
    int result = search(array, n, x);
    if(result == -1)
    cout<<"Element not found";
    else
    cout<<"Element forund at Index :- "<<result;
    
}