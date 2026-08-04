#include <stdio.h>

int sumUsingPointer(int *arr, int n) {
    int sum = 0;
    int *ptr = arr;   // ptr points to the start of the array

    for (int i = 0; i < n; i++) {
        sum += *(ptr + i);   // pointer arithmetic instead of arr[i]
    }
    return sum;
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int total = sumUsingPointer(arr, n);

    printf("Sum of elements = %d\n", total);

    return 0;
}
