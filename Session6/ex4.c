#include <stdio.h>
int findMax(int a, int b, int c, int d) {
	int max = a;
	
	if (b > max) {
		max = b;
	} 
	
	if (c > max) {
		max = c;
	}
	
	if (d > max) {
		max = d;
	}
	return max;
}

int main() {
	int a,b,c,d;
	
	printf("Enter a,b,c,d: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	int max = findMax(a,b,c,d);
	
	printf ("Max is: %d", max);
}
