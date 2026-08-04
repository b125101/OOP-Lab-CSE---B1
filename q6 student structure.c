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

void displayStudents(struct Student s[], int n) {
    int i;
    printf("\n%-12s%-20s%-10s\n", "Roll No", "Name", "Marks");
    printf("---------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%-12d%-20s%-10.2f\n", s[i].rollNo, s[i].name, s[i].marks);
    }
}

int main() {
    struct Student students[5];

    inputStudents(students, 5);
    displayStudents(students, 5);

    return 0;
}
