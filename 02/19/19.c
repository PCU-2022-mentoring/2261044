#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double x, y, z;
	printf("x�� y�� �Է��Ͻÿ�>> ");
	scanf("%lf %lf", &x, &y);

	z = x + y;
	printf("�� ���� ��: %lf", z);
	return 0;
}