#include <stdio.h>
#include <stdlib.h>

int main() {
	
    unsigned int number;
	int i = 0, j = 0, digit;
    int *odd = NULL, *even = NULL;
    int odd_count = 0, even_count = 0;

    odd = (int *)malloc(1 * sizeof(int)); // Baþlangýçta boþ alan
    even = (int *)malloc(1 * sizeof(int));

    if (odd == NULL || even == NULL) {
        printf("Bellek tahsisi baþarýsýz oldu.\n");
        return 1;
    }

    printf("Enter a positive number: ");
    scanf("%d", &number);

    while (number != 0) {
        digit = number % 10;

        if (digit % 2 == 0) {
            even_count++;
            even = (int *)realloc(even, even_count * sizeof(int));
            even[even_count - 1] = digit;
        } else {
            odd_count++;
            odd = (int *)realloc(odd, odd_count * sizeof(int));
            odd[odd_count - 1] = digit;
        }
        number /= 10;
    }

    printf("Even numbers: ");
    for (i = even_count - 1; i >= 0; i--) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (j = odd_count - 1; j >= 0; j--) {
        printf("%d ", odd[j]);
    }

    free(odd);
    free(even);

    return 0;
}

