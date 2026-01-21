#include <stdio.h>

int* findMax(int* arr, int size) {
	int* maxPtr = arr;  // start with the first element
	
	for (int i = 0; i < size; i++) {
		// Update the pointer when there's a larger element in array.
		if (*maxPtr < *(arr + i))
			maxPtr = arr + i;
	}
	return maxPtr;
}

int main() {
	int nums[] = {34, 56, 786, 32, 0, 5};
	int largest = *findMax(nums, 6);
	printf("The largest number is %d\n", largest);
	return 0;
}
