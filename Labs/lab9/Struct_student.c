#include <stdio.h>
#include <stdlib.h>

struct student {
    int number;
    char name[20];
    char surname[20];
    float midtermGrade;
};

struct student List[10];

int main() {
    int i;

    for (i = 0; i < 3; i++) {
        printf("Enter informations for student %d\n", i + 1);

        printf("Enter student number: ");
        scanf("%d", &List[i].number);

        printf("Enter student name: ");
        scanf("%s", List[i].name);

        printf("Enter student surname: ");
        scanf("%s", List[i].surname);

        printf("Enter student midterm grade: ");
        scanf("%f", &List[i].midtermGrade);

        printf("\n"); 
    }

    printf("Entered student informations:\n");

    for (i = 0; i < 3; i++) {
        printf("Student %d informations:\n", i + 1);
        printf("Student number: %d\n", List[i].number);
        printf("Student name: %s\n", List[i].name);
        printf("Surname: %s\n", List[i].surname);
        printf("Midterm grade: %.2f\n", List[i].midtermGrade); 
        printf("\n");
    }

    return 0;
}

