#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Elements entered: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    free(arr);   // release allocated memory

    return 0;
}
