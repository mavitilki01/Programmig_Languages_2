#include <stdio.h>

int sumOfArray(int *p);

int main(){
	int array[5];
	int i; 
	for(i=0;i<5;i++)
	{
		printf("Element - %d: ", i+1);
		scanf("%d", &array[i]);
	}
	printf("The sum of array is : %d", sumOfArray(array));	
}

int sumOfArray(int *p)
{
	int i=0;
	int sum=0;
	for(i=0;i<5;i++)
	{
		sum = sum + *p;
		p++;
	}
	return sum;
}
