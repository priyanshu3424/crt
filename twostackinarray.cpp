//Space Efficient Implement two Stacks in an Array
#include <iostream>
#include <vector>

using namespace std;

class TwoStacks {
private:
    int size;
    //vector<int> arr;
    int *arr ;
    int top1; // Top index of stack 1
    int top2; // Top index of stack 2

public:
    // Constructor to initialize the size of the array and the tops of both stacks
    TwoStacks(int n)
	{ size = n;
	  arr = new int[size];
	  top1 = -1; 
	  top2 = size;
    }
    // Push element 'x' onto stack 1
    void push1(int x) 
	{
        if (top1 < top2 - 1) 
		{	arr[++top1] = x;
        } 
		else 
		{	cout << "Stack 1 overflow\n";
        }
    }

    // Push element 'x' onto stack 2
    void push2(int x) {
        if (top1 < top2 - 1) {
            arr[--top2] = x;
        } else {
            cout << "Stack 2 overflow\n";
        }
    }

    // Pop element from stack 1
    int pop1() {
        if (top1 >= 0) {
            return arr[top1--];
        } else {
            cout << "Stack 1 underflow\n";
            return -1;
        }
    }

    // Pop element from stack 2
    int pop2() {
        if (top2 < size) {
            return arr[top2++];
        } else {
            cout << "Stack 2 underflow\n";
            return -1;
        }
    }
};

int main() {
    int capacity = 10; // Capacity of the array
    TwoStacks ts(capacity);

    ts.push1(5);
    ts.push2(12);
    ts.push2(13);
    ts.push1(6);
    ts.push2(14);

    cout << "Popped element from stack 1: " << ts.pop1() << endl;
    cout << "Popped element from stack 2: " << ts.pop2() << endl;

    return 0;
}
