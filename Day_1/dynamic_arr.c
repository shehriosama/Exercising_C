#include <stdio.h>
#include <stdlib.h>

int* createArray(int size) {
	int* arr = malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		printf("Enter the element of arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	return arr;
}

int main() {
	int arrSize;
	printf("Enter the size of arr: ");
	scanf("%d", &arrSize);

	int* arr = createArray(arrSize);

	printf("\nYour array for index 0 to index %d:\n", arrSize - 1);
	for (int i = 0; i < arrSize; i++)
		printf("\tarr[%d]: %d\n", i, *(arr + i));
		

	free(arr);
	return 0;
}
