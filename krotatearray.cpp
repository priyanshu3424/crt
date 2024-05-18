#include <bits/stdc++.h>
using namespace std;

void rotateArrayByK(int arr[], int n, int k) {
    k = k % n; 
    int count = 0;  

    for (int start = 0; count < n; ++start) {
        int current = start;
        int prev = arr[start];

        do {
            int next = (current + k) % n;
            swap(arr[next], prev);
            current = next;
            count++;
        } while (start != current);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5; 
    int k = 2; 

    rotateArrayByK(arr, n, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
