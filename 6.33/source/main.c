#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarysearch(int binary[], int start, int end, int key);

int main() {
	int key;
	int size = 10;
	int binary[10];
	
	printf("陣列內容:\n");
	for (int i = 0;i < size;i++) {
		binary[i] = 2 + 2 * i;
		printf("%d ", binary[i]);
	}
	printf("\n");

	printf("輸入想搜尋的數:");
	scanf("%d", &key);

	int result=binarysearch(binary, 0,size, key);
	if (result == -1) {
		printf("此數不在此陣列中\n");
	}
	else {
		printf("在索引處找到此數:%d\n", result);
	}
	
	system("Pause");
	return 0;
}

int binarysearch(const int binary[], int start, int end, int key) {
	while(start <= end) {
		int mid = start + (end-start) / 2;
		if (key == binary[mid]) {
			return mid;
		}
		if(key>binary[mid]){
			start = mid + 1;
		}
		if(key<binary[mid]){
			end = mid - 1;
		}
	}
	return -1;
}
