#include <stdio.h>
#include <stdlib.h>


int main() {
	float a,b,c;
	printf("nhap cemtimet: ");
	scanf("%f",&a);
	b=a*2.54;
	c=a*2.54*12;
	printf("%f centimet = %f inch = %f foot",a,b,c);
	return 0;
}
