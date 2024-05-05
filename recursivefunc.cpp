// Recursive function to calculate the product of two numbers without using the multiplication operator
#include <iostream>
using namespace std;

int multiply(int x, int y) 
{
  // Base case: if either number is 0, the product is 0
  if (x == 0 || y == 0)
    return 0;

  // Recursive case: recursively add x to the product of (x, y - 1)
  // when y is positive, or recursively add (-x) to the product of (x, y + 1)
  // when y is negative
  if (y > 0)
    return x + multiply(x, y - 1); // Positive y: add x to the product
  else
    return -x + multiply(x, y + 1); // Negative y: add (-x) to the product
}

int main() 
{
  int n1, n2;
  cout << "Input the first number: ";
  cin >> n1;
  cout << "Input the second number: ";
  cin >> n2;

  // Calculate the product using recursion
  int result = multiply(n1, n2);

  cout << "Product of " << n1 << " and " << n2 << ": " << result;

  return 0;
}