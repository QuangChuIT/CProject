#include <stdio.h>

int reverseNumber(int num) {
    int reversedNum = 0;

    while (num != 0) {
        reversedNum = reversedNum * 10 + num % 10;
        num /= 10;
    }

    return reversedNum;
}

int main() {
	int num;
	printf("Enter num:");
	scanf("%d", &num);
	int reversedNum = reverseNumber(num);
	
	printf("\n Reversed num: %d", reversedNum);
}
