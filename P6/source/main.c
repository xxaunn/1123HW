#include <stdio.h>
#include <stdlib.h>

int cubebyvalue(int n) {
	return n * n*n;
}

int main(void) {
	int number = 5;
	printf("The original value of number is %d", number);
	number = cubebyvalue(number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}