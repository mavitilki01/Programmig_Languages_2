#include <stdio.h>

int sum(int a)
{
	if(a==0)
	{
		return 0;
	}
	else
	{
		return a + sum(a-1);
	}
	
}


void main()
{
	int number, total;
	printf("Enter a number: ");
	scanf("%d", &number);
	total = sum(number);
	printf("Sum : %d", total);
	
}
