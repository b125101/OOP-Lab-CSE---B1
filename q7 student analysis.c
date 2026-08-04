#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

void inputStudents(struct Student s[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].rollNo);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

int findTopper(struct Student s[], int n) {
    int i, topIndex = 0;
    for (i = 1; i < n; i++) {
        if (s[i].marks > s[topIndex].marks)
            topIndex = i;
    }
    return topIndex;
}

float findAverage(struct Student s[], int n) {
    int i;
    float sum = 0;
    for (i = 0; i < n; i++)
        sum += s[i].marks;
    return sum / n;
}

int main() {
    struct Student students[5];

    inputStudents(students, 5);

    int topIndex = findTopper(students, 5);
    float avg = findAverage(students, 5);

    printf("\nStudent with highest marks:\n");
    printf("Roll No: %d, Name: %s, Marks: %.2f\n",
           students[topIndex].rollNo, students[topIndex].name, students[topIndex].marks);

    printf("\nAverage marks of the class: %.2f\n", avg);

    return 0;
}
