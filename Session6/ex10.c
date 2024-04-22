#include <stdio.h>

int sumOddNumber(int number) {
	int sum = 0;
	
	while(number != 0) {
		int d = number % 10;
		
		if (d % 2 != 0) {
			sum += d;
		}
		
		number = number/10;
	}
	return sum;
}

int main() {
	int num;
	printf("Enter number:");
	scanf("%d", &num);
	printf("\nSum odd number: %d", sumOddNumber(num));
}
