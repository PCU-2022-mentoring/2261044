#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <stdio.h>

int main()
{
	int radius;
	double area;
	printf("�������� �Է��Ͻÿ�: ");
	scanf("%d", &radius);
	
	area = PI * radius * radius;
	printf("���� ����: %lf", area);
	return 0;
}