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
	bubble(array, 10);
	for(i=0;i<10;i++)
	{
		printf("%d", array[i]);
	}
	
	return 0;
}
int bubble(int arr[], int n)
{
	int i, j, other;
	
	for(j=0; j<n-1; j++)
	{
		for(i=0 ; i<n-1-j; i++)
		{
			if(arr[i]>arr[i+1])
			{
				other = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = other;
			}
		}
		
		
	}
	return 0;

}
