#include <stdio.h>
int main()
{
	float a,b,c;
	printf("Enter first number = ");
	scanf("%f",&a);
	printf("Enter second number = ");
	scanf("%f",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("After swapping first nummber = %.2f\n",a);
	printf("After swapping second number = %.2f",b);
	
	return 0;
}
