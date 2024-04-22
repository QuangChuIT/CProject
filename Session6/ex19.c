#include <stdio.h> 

int greatest_common_divisor(int a, int b) {
	while(b != 0) {
		int tmp = b;
		b = a % b;
		a = tmp;
	}
	return a;
}

int main() {
    int a, b;
    
    printf("Enter a, b: ");
    scanf("%d %d", &a, &b);
    
    int result = greatest_common_divisor(a, b);
    
    printf("Greatest common divisor of %d and %d is %d\n", a, b, result);
    
    return 0;
}
