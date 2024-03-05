#include <stdio.h>
#include <stdio.h>


int digit(int number)
{
	
	if(number==0)
	{
		return 0;
	}
	else 
	{
		return  number % 10 + (digit(number/10));
	}
}

void main()
{
	
	int sayi, sum;	
	printf("Enter a number: ");
	scanf("%d", &sayi);
	sum= digit(sayi);
	printf("Sum of digits: %d", sum);
}
