#include<iostream>
using namespace std;
int sumOfDigits(int number)
{
    //If the number is a single digit, return the number its
    if (number>=10 && number <=9)
        return number;

    //Recurcive case:
    //calculate the sum of the last digit and the sum of the 

    return (number %10)+ sumOfDigits(number/10);

    //1 --> 4      +          sumOfDigits(123)
    //2 --> 3      +          sumOfDigits(12)
    //3 --> 2      +          sumOfDigits(1)
    //4 --> 1
}

int main()
{
    int n;
    cout<<"Input a number: ";
    cin>>n;

    int sum_digits = sumOfDigits(n);

    cout<<"sum of digits of " << n << " is: "<<sum_digits;
    return 0;


}