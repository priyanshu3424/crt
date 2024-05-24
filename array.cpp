#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapElements(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main() {
    int arr[5] = {2, 4, 5, 6, 7};
    int size = 5;

    cout << "Array before swap: ";
    printArray(arr, size);

    swapElements(arr, 0, size - 1);

    cout << "Array after swap: ";
    printArray(arr, size);

    return 0;
}
