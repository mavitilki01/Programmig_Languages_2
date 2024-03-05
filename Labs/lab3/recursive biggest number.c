#include <stdio.h>
#include <stdlib.h>
 

 int greater(int a[], int x)
 {
 	int max;
 		
	 if(x==0)
	 
	 	return a[0];
	 	
	else
	 max = greater(a, x-1);
	
	if (max >a[x-1])
			return max;
	else
			return a[x-1];
	
 	
 	
 }
 
 void main()
 {
 	int array[10], bigger, i;
 	
 	for(i=0; i<10 ;i++)
 	{
 	printf("Enter element %d: ", i + 1);
	scanf("%d", &array[i]);
	}
	 
	printf("bigger number is %d", greater(array, 10));
 		
 }
