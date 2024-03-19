#include <stdio.h>

int main()
{
	int array[5];
	int i;
	int *p;
	
	
	for(i =0;i<5;i++)
	{
		scanf("%d", &array[i]);
	}
	
	p= &array;
	
	for(i=0;i<5;i++,p++){
		printf("Element - %d : %d\n", i, *p);
	}
	
	
}
