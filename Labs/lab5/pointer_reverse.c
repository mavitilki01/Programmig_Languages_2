#include <stdio.h>

void reverse(char *p);
int lenghtOfArray(char *p);
int main()
{
	char array[100];
	int i;
	printf("Pointer : Print a string in reverse order :  ");
	printf("------------------------------------------------ \n");
	printf("Input a string: ");
	gets(array);
	reverse(array);
}

void reverse(char *p)
{ 
	int i = lenghtOfArray(p);
	printf("Reverse of the string is :");
	for(i--;i>=0;i--)
	{
		printf("%c", *(p+i));
	}
}

int lenghtOfArray(char *p){
	
	int lenght =0;
	while(*p!='\0'){ lenght++; p++;	}
	return lenght;
}
                                                  
                                                             

