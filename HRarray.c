#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        // Swap the elements at start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start and end pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    // Dynamically allocate memory for the array
    int *arr = (int *)malloc(n * sizeof(int));

    // Read array elements from stdin
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to reverse the array
    reverseArray(arr, n);

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
