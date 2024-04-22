#include<stdio.h>
#include<conio.h>
#define ROW 100
#define COL 100

void input(float a[][COL], int *m, int *n) {
	int i,j;
	printf("Enter rows:");
	scanf("%d", m);
	printf("Enter columns:");
	scanf("%d", n);
	
	for (i = 1; i <= *m; i++) {
		for (j = 1; j <= *n; j++) {
			printf("Enter a[%d][%d]:", i, j);
			scanf("%f", &a[i][j]);
		}
	}
}

void output(float a[][COL], int m, int n) {
	printf("\nMatrix: \n");
	int i,j;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			printf("%.2f   ", a[i][j]);
		}
		printf("\n");
	}
}

void calculateMultipe(float a[][COL], int m, int n) {
	float result = 1.0;
	int i, j;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (i % 2 == 0 && j % 2 != 0) {
				printf("%f\n", a[i][j]);
				result*= a[i][j];
			}
		}
	}
	
	printf("\nMultipe element in even row and odd colums: %.2f", result);
}

void findMins(float a[][COL], int m, int n) {
	int min = -1;
	int minRow = -1;
	int minCol = -1;
	int i, j;
	for (i = 1; i <= m; i++) {
		for(j = 1; j <= n; j++) {
			if (a[i][j] > 0) {
				if (min == -1) {
					min = a[i][j];
					minRow = i;
					minCol = j;
				} else if (a[i][j] < min) {
					min = a[i][j];
					minRow = i;
					minCol = j;
				}
			}
		}
	}
	
	if (min != -1) {
		printf("\nMin value is: %d\n", min);
		printf("Position of one min value is row: %d, col %d", minRow, minCol);
	}
}

int main() {
	int m, n;
	float a[ROW][COL];
	input(a, &m,&n);
	output(a, m,n);
	calculateMultipe(a, m, n);
	findMins(a, m, n);
	getch();
}
