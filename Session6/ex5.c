#include <stdio.h>

void swap(int *a, int * b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b;
	printf("Enter value of a: ");
	scanf("%d", &a);
	
	printf("\Enter value of b: ");
	
	scanf("%d", &b);
	
	swap(&a, &b);
	
	printf ("After swap: a = %d, b = %d", a, b);
}
