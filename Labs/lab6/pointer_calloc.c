#include <stdio.h>

void main()
{
	int n, *p, max, i;
	printf("Enter total number of elements: ");
	scanf("%d", &n);
	
	p= (int*)calloc(n, sizeof(int));
	
	for(i=0;i<n;i++)
	{
		scanf("%d", p+i);
	}
	max=*p;
	for(i=1;i<n;i++){
		if(*(p+i)>max)
		{
			max=*(p+i);
		}			
	}
	printf("Biggest number: %d", max);
}
