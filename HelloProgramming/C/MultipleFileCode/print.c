#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(const char* str) {
	while (*str) {
		printf("%c", *str);
		str++;
	}
	printf("\n");
	return;
}