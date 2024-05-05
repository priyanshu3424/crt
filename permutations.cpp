// Recursive function to generate all permutations of a string
#include <iostream>
#include <string>
using namespace std;

void generate_Permutations(string text, int left, int right) 
{
  // Base case: if left and right indices are the same, 
  // we have a complete permutation
  if (left == right) 
  {	 cout << text << endl; // Output the generated permutation
     return;
  }

  // Recursive case: swap each character with the character at the left index,
  // and recursively generate permutations for the rest of the string
  for (int i = left; i <= right; i++) 
  {
    swap(text[left], text[i]); // swap characters 
    generate_Permutations(text, left + 1, right); // Recursively generate permutations
    swap(text[left], text[i]); // Backtrack by swapping back the characters
  }
}

int main() 
{
  string text;
  cout << "Input a string: ";
  cin >> text;

  cout << "All permutations of the string: " << endl;
  generate_Permutations(text, 0, text.length() - 1); // Generate permutations

  return 0;
}
