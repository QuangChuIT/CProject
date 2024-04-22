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
			printf("%f   ", a[i][j]);
		}
		printf("\n");
	}
}
void findMin(float a[][COL], int m, int n) {
	int i,j;
	float min = a[1][1];
	int cnt = 0;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (a[i][j] < min) {
				min = a[i][j];
			}
		}
	}
	printf("\nMin is: %.2f", min);
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			if (a[i][j] == min) {
				printf("\nColumn %d contain min value", j);
				cnt++;
				break;
			}
		}
	}
	printf("\nHave %d columns contain min value", cnt);

} 
int main() {
	int m, n;
	float a[ROW][COL];
	input(a, &m,&n);
	output(a, m,n);
	findMin(a, m, n);
	getch();
}
