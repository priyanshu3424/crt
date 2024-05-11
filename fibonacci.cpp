#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    // Recursive case:
    // Fibonacci of n is the sum of the previous
    // two fibonacci numbers
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;
    cout << "Input a number: ";
    cin >> n;
    int fib_num = fibonacci(n);
    cout << "The " << n << "th Fibonacci number is: " << fib_num;
    return 0;
}


//seach on google- fibonacci series in nature
