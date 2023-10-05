#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 5;
	int num1, num2;
	for (int num1 = 1; num1 <= n; num1++) {
		for (num2 = 1; num2 <= n - num1; num2++) {
			printf("\n");
			for (int num3 = 1; num3 <= 2 * 1 - 1; num3++) {
				printf("*\n");

			}
		}
	}
	return 0;
}
