#include <stdio.h>
#include <stdlib.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Dynamically allocate memory for n Student structures
    struct Student *s = (struct Student *)malloc(n * sizeof(struct Student));

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Find student with highest marks
    int topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }

    printf("\nStudent with highest marks:\n");
    printf("Roll Number: %d\n", s[topIndex].rollNo);
    printf("Name       : %s\n", s[topIndex].name);
    printf("Marks      : %.2f\n", s[topIndex].marks);

    free(s);   // release allocated memory

    return 0;
}
