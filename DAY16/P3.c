#include <stdio.h>

void findPair(int arr[], int n, int targetSum) {
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], targetSum);
                found = 1;
            }
        }
    }
    
    if (!found) {
        printf("No pair found with sum %d\n", targetSum);
    }
}

int main() {
    int arr[] = {2, 7, 11, 15, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 13;
    
    findPair(arr, n, targetSum);
    
    return 0;
}