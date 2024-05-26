#include <stdio.h>
#include <stdlib.h>


struct Student {
    int number;
    char name[50];
    char surname[50];
    float grade;
};

int main() {
    struct Student *students;
    int numStudents, i;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < numStudents; i++) {
        printf("Enter information for student %d:\n", i + 1);
        
        printf("Enter student number: ");
        scanf("%d", &students[i].number);

        printf("Enter student name: ");
        scanf("%s", students[i].name);

        printf("Enter student surname: ");
        scanf("%s", students[i].surname);

        printf("Enter student grade: ");
        scanf("%f", &students[i].grade);

        printf("\n");
    }

    printf("Entered student informations:\n");
    for (i = 0; i < numStudents; i++) {
        printf("Student %d informations:\n", i + 1);
        printf("Student number: %d\n", students[i].number);
        printf("Student name: %s\n", students[i].name);
        printf("Student surname: %s\n", students[i].surname);
        printf("Student grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    free(students);

    return 0;
}

