#include <stdio.h>

int sum(int n) {
	if (n == 0) {
		return 0;
	} else {
		return n*n + sum(n - 1);
	}
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int s = sum(n);
    
    printf("Sum of the 1^2 + 2^2 + ... + %d^2 = %d\n", n, s);
    
    return 0;
}
