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
	insertion(array, 10);
	for(i=0;i<10;i++)
	{
		printf("%d", array[i]);
	}
	
	return 0;
}
int insertion(int arr[], int n)
{
	int i, j, add;
	
	for(j=1; j<n; j++)
	{
		add = arr[j];
		for(i=j-1 ; i>=0 && add<= arr[i]; i--)
		{
			arr[i+1] = arr[i];
			arr[i] = add;
			
		}
		
		
	}
	return 0;

}
