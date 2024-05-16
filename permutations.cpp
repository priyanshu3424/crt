#include <iostream>
#include <string>
using namespace std;

void generate_Permutations(string text, int left, int right) 
{
  if (left == right) 
  {	 cout << text << endl; 
     return;
  
  for (int i = left; i <= right; i++) 
  {
    swap(text[left], text[i]); 
    generate_Permutations(text, left + 1, right);
    swap(text[left], text[i]);
  }
}

int main() 
{
  string text;
  cout << "Input a string: ";
  cin >> text;

  cout << "All permutations of the string: " << endl;
  generate_Permutations(text, 0, text.length() - 1);

  return 0;
}
