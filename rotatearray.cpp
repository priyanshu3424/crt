#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    int temp = arr[0];
    for(int i=0; i<n; i++) {
       arr[i-1]=arr[i];
    }
    arr[n-1] = temp; 
}

int main() {
    int arr[5] = {1,2,3,4,5};
    int n=5; 
    solve(arr, n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<< " ";
    }
    return 0;
}
