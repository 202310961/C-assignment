#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, k;
	printf("Please enter a number:");
	scanf("%d", &n);
	for (k = 2;  k < n;k++) {
		if (n == 1)
			printf("It is a prime number");
		if(n==2)
			printf("It is a prime number");
		 if (n % k == 0)
			printf("It is not a prime number");
		else
			printf("It is a prime number");
		}
	return 0;
}