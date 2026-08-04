#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;   // return position (0-based index)
    }
    return -1;          // not found
}

int main() {
    int n, i, key, position;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    position = linearSearch(arr, n, key);

    if (position != -1)
        printf("Element found at position %d\n", position + 1);
    else
        printf("Element not found\n");

    return 0;
}
