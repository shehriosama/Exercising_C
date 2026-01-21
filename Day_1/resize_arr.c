#include <stdio.h>
#include <stdlib.h>

int main() {
	int* arr = malloc(sizeof(int) * 6);
	for (int i = 0; i < 6; i++) {
		printf("Enter the element of arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}

	arr = realloc(arr, sizeof(int) * 10);
	for (int i = 7; i < 10; i++) {
		printf("Enter the element of arr[%d]: ", i - 1);
		scanf("%d", &arr[i]);
	}

	printf("\nThe arr[0..10]:\n");
	for (int i = 0; i < 10; i++)
		printf("\tarr[%d]: %d\n", i, *(arr + i));

	free(arr);
	return 0;
}
