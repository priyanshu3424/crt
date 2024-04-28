#include<iostream>
using namespace std;

int gcd(int a, int b);

int main()
{
    int n1, n2;

    cout << "Input the first number: ";
    cin >> n1;

    cout << "Input the second number: ";
    cin >> n2;

    // Calculate the GCD using recursion
    int result = gcd(n1, n2);
    cout << "The GCD of " << n1 << " and " << n2 << " is: " << result;

    return 0;
}


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}
