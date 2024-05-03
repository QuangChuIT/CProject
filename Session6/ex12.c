#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    int sqr = sqrt(num);
	return sqr * sqr == num; 
}

int sumPerfectSquare(int number) {
	int sum = 0;
	while(number != 0) {
		int d = number % 10;
	
		if (isPerfectSquare(d)) {
			sum += d;
		}
	
		number = number/10;
	}
	return sum;
}

int main() {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Sum total perfect square:  %d", sumPerfectSquare(n));
}
