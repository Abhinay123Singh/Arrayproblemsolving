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
void shiftArray(int arr[],int n)
{
    // step 1
    int temp =arr[n-1];
    //step-2
    //shift ->arr[i]=arr[i-1]
    for(int i=n-1;i>=1;i--)
    {
        arr[i]=arr[i-1];
    }
    // step3 copy into 0th index
arr[0]=temp;
}


int main() {
    int arr[] = {10,20,30,40,50,60};
    int n = 6; // Calculate array size
shiftArray(arr,n);
// print
for(int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
// step3 copy into 0th index
}
