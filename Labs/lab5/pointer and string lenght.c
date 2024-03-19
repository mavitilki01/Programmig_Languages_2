#include <stdio.h>

int lenght_array(char *p);

int main()
{
char array[100];

printf("Enter a string: ");
gets(array);

printf("The lenght of the string: %d", lenght_array(array));	
}

int lenght_array(char *p)
{
	int lenght;
	for(lenght =0; *p!='\0'; lenght++)
	{
		p++;	
	}
	
	return lenght;
}
