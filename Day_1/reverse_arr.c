#include <stdio.h>

void reverseArray(int* arr, int size) {
	// two pointers
	int l = 0, r = size - 1;
	while (l < r) {
		// swap
		int temp = *(arr + l);
		*(arr + l) = *(arr + r);
		*(arr + r) = temp;

		// move pointers to middle (avoiding endless loop)
		l++;
		r--;
	}
}

int main() {
	int nums[] = {1, 2, 3, 4, 5};
	reverseArray(nums, 5);

	for (int i = 0; i < 5; i++)
		printf("%d ", nums[i]);
	return 0;
}
