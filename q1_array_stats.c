#include <stdio.h>

void findStats(int arr[], int n, int *largest, int *smallest, float *average) {
    int i, sum = 0;
    *largest = arr[0];
    *smallest = arr[0];

    for (i = 0; i < n; i++) {
        if (arr[i] > *largest)
            *largest = arr[i];
        if (arr[i] < *smallest)
            *smallest = arr[i];
        sum += arr[i];
    }
    *average = (float)sum / n;
}

int main() {
    int n, i;
    int largest, smallest;
    float average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findStats(arr, n, &largest, &smallest, &average);

    printf("Largest element  : %d\n", largest);
    printf("Smallest element : %d\n", smallest);
    printf("Average          : %.2f\n", average);

    return 0;
}
