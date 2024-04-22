#include <stdio.h>
void swap(int *a, int *b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int a = 5;
	int b = 10;
	int *pa = &a;
	
	printf("value of pa: %d\n", pa);
	
	printf("value memory pa: %d\n", *pa);
	
	printf("address of pa: %d", &pa);
	
	swap(&a, &b);
	
	
	printf("value of a,b: %d %d", a, b);
}
