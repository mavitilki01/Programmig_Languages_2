#include <stdio.h>


struct Student {
    int number;
    char name[50];
    char surname[50];
    float grade;
};

int main() {
    struct Student students[5];  
    int i;


    for (i = 0; i < 5; i++) {
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
    for (i = 0; i < 5; i++) {
        printf("Student %d informations:\n", i + 1);
        printf("Student number: %d\n", students[i].number);
        printf("Student name: %s\n", students[i].name);
        printf("Student surname: %s\n", students[i].surname);
        printf("Student grade: %.2f\n", students[i].grade);
        printf("\n");
    }

    return 0;
}

