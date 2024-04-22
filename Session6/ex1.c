#include <stdio.h>

void convertLowerToUpper() {
	char c;
	printf("Enter character:");
	scanf("%c", &c);
	if (c >= 'a' && c <= 'z') {
		c = c - 32;
	}
	printf("Result convert lower to upper: %\n", c);
}

void convertUpperToLowser() {
	char c;
	printf("Enter character:");
	scanf("%c", &c);
	if (c >= 'A' && c <= 'Z') {
		c = c + 32;
	}
	printf("Result convert upper to lowser: %c", c);
}

int main() {
	convertUpperToLowser();
} 
