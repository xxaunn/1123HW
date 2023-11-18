#include <stdio.h>
#include <stdlib.h>
#define Size 10

void  bubblesort(int *const array ,const int size) {
	void swap(int *element1ptr, int *element2ptr);
	int pass;
	int j;
	for (pass = 0;pass < size - 1;pass++) {
		for (j = 0;j < size - 1;j++) {
			if (array[j] > array[j + 1]) {
				swap(&array[j],&array[j + 1]);
			}
		}
	}
}
void swap(int *element1ptr, int *element2ptr) {
	int hold = *element1ptr;
	*element1ptr = *element2ptr;
	*element2ptr = hold;
}
int main(void) {
	int a[Size] = { 2,6,4,8,10,12,89,68,45,37 };
	int i;

	printf("Data items in original order\n");
	for(i = 0;i < Size;i++) {
		printf("%4d", a[i]);
	}
	bubblesort(a, Size);

	printf("\nData items in ascending order\n");

	for (i = 0;i < Size;i++) {
		printf("%4d", a[i]);
	}
	printf("\n");
	system("Pause");
	return 0;
}