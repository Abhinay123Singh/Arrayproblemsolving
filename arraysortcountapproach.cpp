#include <iostream>
using namespace std;

void sortZeroOne(int arr[], int n) {
    int zeroCount = 0;

    // Step A: Count 0s in the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeroCount++;
        }
    }

    // Step B: Place all 0s first
    int i;
    for (i = 0; i < zeroCount; i++) {
        arr[i] = 0;
    }

    // Step C: Place all 1s after 0s
    for (int j = i; j < n; j++) {
        arr[j] = 1;
    }
}

int main() {
    int arr[] = {0, 1, 0, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    sortZeroOne(arr, n);

    // Printing the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
