#include <stdio.h>
#include <stdlib.h>

	float average, sum=0;
	float array[100];
	int i=0, grade, student, failed =0;
	
float calculate (int student);

void main()
{
	printf("Enter the passing garde: ");
	scanf("%d", &grade);
	printf("Enter the student number: ");
	scanf("%d", &student);
	calculate(student);
	printf("Average: %f\n", average);
	printf("Students failed: %d", failed);
	
	
}
	
	
	float calculate(int student)
	{
	for(i; i<student ;i++)	
	{
		printf("Student %d grade: ", i+1);
		scanf("%f", &array[i]);	
			
		if(array[i]<grade)
		{
			failed++;
		}		
		sum= sum + array[i];
	}	
	average = sum/student;
	return average;
	}
	

