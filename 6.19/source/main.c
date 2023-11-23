#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
	const int row = 6;
	const int column = 6;
	int ans[6][6] = { 0 };
	int num;
	srand(time(0));
	int i, j;
	for (num = 1;num <= 36000;num++) {
		i = rand() % 6;
		j = rand() % 6;
		ans[i][j] = ans[i][j] + 1;
	}

	printf("     ");
	for (int k = 1;k <= column;k++) {
		printf("%5d", k);
	}
	printf("\n");

	for (i = 0;i < row;i++) {
		printf("%5d", i + 1);
		for (j = 0;j < column;j++) {
			printf("%5d", ans[i][j]);
		}
		printf("\n");
	}
/*	for (i = 0;i < row;i++) {
		for (j = 0;j < column;j++) {
			printf("%5d", ans[i][j]);
		}
		printf("\n");
	}*/
	system("Pause");
	return 0;
}