#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* stringCopy(char* source) {
	char* copiedString = malloc(strlen(source));
	memcpy(copiedString, source, strlen(source));
	return copiedString;
}

int main() {
	char userIn[400];
	printf("Enter the anything you want: ");
	fgets(userIn, 400, stdin);
	userIn[strcspn(userIn, "\n")] = '\0';

	char* copiedString = stringCopy(userIn);
	printf("\n\"%s\" is copied!\n", copiedString);
	free(copiedString);
	return 0;
}
