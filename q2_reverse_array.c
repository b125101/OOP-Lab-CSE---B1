#include <stdio.h>

void reverseArray(int arr[], int n) {
    int i;
    printf("Array in reverse order: ");
    for (i = n - 1; i >= 0; i--)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverseArray(arr, n);

    return 0;
}
