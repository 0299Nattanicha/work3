#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float a;
	scanf("%f", &a);
	if (a < 10)
	{
		printf("%.1f less than 10",a);
	}
	else
	{
		printf("%.1f more than 10",a);
	}
	return 0;
}