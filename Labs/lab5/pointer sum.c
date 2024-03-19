#include <stdio.h>
int main()
{
    int number1;
    int number2;
    int sum;
    int *p;
    int *k;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    p= &number1;
    k = &number2;
    sum = *p+*k;
	printf("The sum of the entered numbers is : %d", sum); 

    return 0;
}
