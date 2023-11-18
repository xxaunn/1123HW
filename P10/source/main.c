#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

void cubebyreference(int *nptr) {
	*nptr = *nptr * *nptr * *nptr;
}

int main(void) {
	int number = 5;
	printf("The original value of number is %d", number);
	cubebyreference(&number);
	printf("\nThe new value of number is %d\n", number);
	system("pause");
	return 0;
}