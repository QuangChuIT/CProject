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

int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	
	if (isPrime(n)) {
		printf("%d is prime", n);
	} else {
		printf ("%d is not prime", n);
	}
}
