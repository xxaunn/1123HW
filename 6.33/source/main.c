#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int binarysearch(int binary[], int start, int end, int key);

int main() {
	int key;
	int size = 10;
	int binary[10];
	
	printf("�}�C���e:\n");
	for (int i = 0;i < size;i++) {
		binary[i] = 2 + 2 * i;
		printf("%d ", binary[i]);
	}
	printf("\n");

	printf("��J�Q�j�M����:");
	scanf("%d", &key);

	int result=binarysearch(binary, 0,size, key);
	if (result == -1) {
		printf("���Ƥ��b���}�C��\n");
	}
	else {
		printf("�b���޳B��즹��:%d\n", result);
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
