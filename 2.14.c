#include<stdio.h>
#include<conio.h>
#define ROW 100
#define COL 100

void input(int a[][COL], int *m, int *n) {
	int i,j;
	printf("Enter rows:");
	scanf("%d", m);
	printf("Enter columns:");
	scanf("%d", n);
	
	for (i = 1; i <= *m; i++) {
		for (j = 1; j <= *n; j++) {
			printf("Enter a[%d][%d]:", i, j);
			scanf("%d", &a[i][j]);
		}
	}
}

void output(int a[][COL], int m, int n) {
	printf("\nMatrix: \n");
	int i,j;
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= n; j++) {
			printf("%d   ", a[i][j]);
		}
		printf("\n");
	}
}
void calculateColumns(int a[][COL], int m, int n) {
	int i,j;
	int sum[n];
	int cnt = 0;
	for (j = 1; j <= n ; j++) {
		sum[j] = 0;
		for (i = 1; i <= m; i++) {
			sum[j] += a[i][j];
		}
	}
	
	printf("\nSum columns: \n");
	
	for(i = 1 ; i <= n; i++) {
		printf("Sum(%d) = %d\n", i, sum[i]);
		if (sum[i] % 2 == 0) {
			cnt++;
		}	
	}
	printf("Total %d colums have sum is even", cnt);
} 
int main() {
	int m, n;
	int a[ROW][COL];
	input(a, &m,&n);
	output(a, m,n);
	calculateColumns(a, m, n);
	getch();
}
