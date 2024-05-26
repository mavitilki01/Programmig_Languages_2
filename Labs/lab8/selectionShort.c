#include <stdio.h>
#include <stdlib.h>

int selection(int[], int a);

int main()
{
	int array[10], i;
	for(i=0;i<10;i++)
	{
		scanf("%d", &array[i]);
	}
	selection(array, 10);
	for(i=0;i<10;i++)
	{
		printf("%d ", array[i]);
	}
	
	return 0;
}

int selection(int arr[], int a)
{
	int i, j;
	
	for(j=0; j<a-1; j++)
	{
		int min = arr[a-1];
		int other = a-1;
		for(i=j; i<a-1; i++)
		{
			if(arr[i]<min){
				min = arr[i];
				other = i;
			}
		}
		arr[other] = arr[j];
		arr[j] = min;
	}
	return 0;
}
