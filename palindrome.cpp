#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

bool isPalindrome(const string& str) {
    return equal(str.begin(), str.begin() + str.size() / 2, str.rbegin());
}

int main() {
    string text;

    cout << "Input a string: ";
    cin >> text;
    // Alternatively, you can use getline(cin, text) to input a string with spaces.

    bool palindrome = isPalindrome(text);

    if (palindrome)
        cout << "\nThe string is a palindrome.";
    else
        cout << "\nThe string is not a palindrome.";

    return 0;
}
