#include <stdio.h>
#include <stdlib.h>

int stringreverse(char string[]);

int main() {
	char string[100];
	printf("enter a string:");
	scanf("%s", &string);
	printf("initial string:%s\n", string);
	stringreverse(string);
	printf("reverse string:%s\n", string);
	system("Pause");
	return 0;
}

int stringreverse(char string[]) {
	int size = 0;
	while (string[size] != '\0') {
		size++;
	}
	int temp;

	for (int i = 0;i < size / 2;i++) {
		temp = string[size - 1-i];
		string[size - 1-i] = string[i];
		string[i] = temp;
	}
}