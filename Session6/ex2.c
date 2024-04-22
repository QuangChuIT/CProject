#include <stdio.h>
void firstDegreeEquation();
int main() {
	firstDegreeEquation();
} 

void firstDegreeEquation() {
	int a, b;
	printf("Enter ax+b=0: \n");
	printf("Enter a:\n");
	scanf("%d", &a);
	printf("Enter b: \n");
	scanf("%d", &b);
	if (a == 0) {
		if (b != 0) {
			printf("\n Infinite equation"); 
		} else {
			printf("\n Equation with countless solutions"); 
		}
	} else {
		printf("Equation has a unique result: %.2f", (float) b / a); 
	}

}
