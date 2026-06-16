#include <stdio.h>

int findMissingNumber(int arr[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2;
    
    int actualSum = 0;
    for (int i = 0; i < n; i++) {
        actualSum += arr[i];
    }
    
    return totalSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // 3 is missing
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int missing = findMissingNumber(arr, n);
    printf("Missing number is: %d\n", missing);
    
    return 0;
}