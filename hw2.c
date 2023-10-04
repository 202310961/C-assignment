#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	double num1;
	double mile;
	printf("please enter kilometers:");
	scanf("%lf", &num1);
	mile = num1 / 1.609;
	printf("%.1lf km is equal to %.1lf miles\n", num1, mile);
	return 0; 
}