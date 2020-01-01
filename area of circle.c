#include<stdio.h>
#define PI 3.14
float r;
float area(float x);
int main()
{
	float ar;
	printf("enter radius");
	scanf("%f",&r);
	ar=area(r);
	printf("\n are of circle :%2f",ar);
	return 0;
}
float area(float x)
{
	return (PI*x*x);
}
