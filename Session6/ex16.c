#include <stdio.h>

float sum(int n) {
	if (n == 1) {
		return 1.0;
	} else {
		return 1.0/n + sum(n - 1);
	}
}

int main() {
    int n;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    float s = sum(n);
    
    printf("Sum of the 1 + 1/2 + ... + 1/%d = %.2f\n", n, s);
    
    return 0;
}
