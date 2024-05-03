//Reverse a String using Stack

#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(const string& input) 
{
    stack<char> charStack;
    string reversedString;

    // Push each character of the input string onto the stack
    for (char c : input) 
	{	charStack.push(c);
    }

    // Pop characters from the stack to construct the reversed string
    while (!charStack.empty()) 
	{	reversedString += charStack.top();
        charStack.pop();
    }

    return reversedString;
}

int main() 
{
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string reversed = reverseString(input);

    cout << "Reversed string: " << reversed << endl;

    return 0;
}