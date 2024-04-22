#include <stdio.h>

int factorial(int n) {
	if ( n <= 0) {
		return 1;
	} else {
		return n * factorial(n - 1);
	}
}
int sum(int n) {
	if (n == 0) {
		return 0;
	} else {
		return factorial(n) + sum(n - 1);
	}
}
int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int s = sum(n);
    
    printf("Sum of the 1! + 2! + ... + %d! = %d\n", n, s);
    
    return 0;
}
