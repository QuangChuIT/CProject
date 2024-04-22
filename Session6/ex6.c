#include <stdio.h>
#define SIZE 4
void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main () {
	int a[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) {
		printf("Enter numer %d:", (i + 1));
		scanf("%d", &a[i]);
	}
	
	bubbleSort(a, SIZE);
	printf("\nAfter sort:\n");
	for (i = 0; i < SIZE; i++) {
		printf("%d  ", a[i]);
	}
}
