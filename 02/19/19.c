#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;
	printf("x와 y를 입력하시오>> ");
	scanf("%lf %lf", &x, &y);

	z = x + y;
	printf("두 수의 합: %lf", z);
	return 0;
}