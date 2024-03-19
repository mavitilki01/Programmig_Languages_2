#include <stdio.h>

int swapping(int *p, int first, int second);

void main()
{
	int array[5];
	int i, a, b;
	for(i=0;i<5;i++)
	{
		printf("Input the value of element %d :", i+1);
		scanf("%d", &array[i]);	
	}
	printf("which elements do you want to swap? \n");
	scanf("%d",&a);
	printf("with\n");
	scanf("%d", &b);
	swapping(array,a,b);
	printf("The value after swapping are : \n");
	for(i=0;i<5;i++)
	{
		printf("Element %d: %d\n", i+1, array[i]);
	}
	
}

int swapping(int *p, int first, int second)
{
	int temp;
	
	temp = *(p+first-1);
	*(p+first-1)=*(p+second-1);
	*(p+second-1)= temp;
	return *p;

}

