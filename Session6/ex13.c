#include <stdio.h>
#include <math.h>

int isPrime(int num) {
	if (num < 2) {
		return 0;
	} 
	int i;
	for (i = 2; i <= sqrt(num); i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	return 1;
} 

int sumPrime(int number) {
	int sum = 0;
	while(number != 0) {
		int d = number % 10;
		
		if (isPrime(d)) {
			sum += d;
		}
		
		number = number / 10;
	}
	return sum;
}

int main () {
	int n;
	printf("Enter number: ");
	scanf("%d", &n);
	printf("Sum total prime number:  %d", sumPrime(n));
}
