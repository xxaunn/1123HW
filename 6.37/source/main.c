#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Maximum(int *array, int size) {
	if (size == 1) return array[0];
	int max = Maximum(array, size - 1);
	return max > array[size - 1] ? max : array[size - 1];
}

int main() {
	srand(time(0));
	int a[10];
	for (int i = 0;i < 10;i++) a[i] = rand() % 100;
	printf("Array a:\n");
	for (int i = 0;i < 10;i++) printf("%d ", a[i]);
	printf("\n");
	printf("The maximum of array a is ");
	printf("%d\n", Maximum(a, 10));
}