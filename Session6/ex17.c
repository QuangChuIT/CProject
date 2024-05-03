#include <stdio.h>

int multipe(int n) {
	if ( n <= 0) {
		return 1;
	} else {
		return n * multipe(n - 1);
	}
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int m = multipe(n);
    
    printf("Sum of the 1 * 2 * ... * %d = %d\n", n, m);
    
    return 0;
}
