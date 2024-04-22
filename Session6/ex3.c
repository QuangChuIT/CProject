#include <stdio.h>
#include <math.h>
void firstDegreeEquation(float a, float b);
void secondDegreeEquation();

int main() {
	secondDegreeEquation();
}

void fistDegreeEquation(float a, float b) {
	if (a == 0) {
		if (b != 0) {
			printf("\n Phuong trinh vo nghiem"); 
		} else {
			printf("\n Phuong trinh vo so nghiem"); 
		}
	} else {
		printf("Phuong trinh co nghiem duy nhat: %.2f", b / a); 
	}
}

void secondDegreeEquation() {
	float a,b,c;
	float delta;
	printf("Enter a,b,c: ");
	
	scanf("%f%f%f", &a, &b, &c);
	
	if (a == 0) {
		fistDegreeEquation(b, c);
	} else {
		delta = b*b - 4*a*c;
		
		if (delta < 0) {
			printf("\nPhuong trinh vo nghiem");
		} else if (delta == 0) {
			printf("\nPhuong trinh co nghiem kep %.2f", -b/2*a);
		} else {
			printf("\nPhuong trinh co hai nghien rieng biet x1=%.2f, x2=%.2f", (-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
		}
	}
}
