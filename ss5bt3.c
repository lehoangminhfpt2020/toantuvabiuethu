#include <stdio.h>
#include <stdlib.h>


int main() {
	int iResult;
	int a,b,c,d,e;
	a=10;
	b=8;
	c=6;
	d=5;
	e=2;	
 iResult = a - b - c - d; 
 printf("iResult = %d",iResult);
 iResult = a - b + c - d; 
 printf("\n iResult = %d",iResult);
 iResult = a + b / c / d;
 printf("\n iResult = %d",iResult);
 iResult = a + b / c * d; 
 printf("\n iResult = %d",iResult);
 iResult = a / b * c * d;
 printf("\n iResult = %d",iResult);
 iResult = a % b/ c * d;
 printf("\n iResult = %d",iResult);
 iResult = a % b %c % d;
 printf("\n iResult = %d",iResult);
 iResult = a - (b-c) - d; 
 printf("\n iResult = %d",iResult);
 iResult = (a - (b - c)) - d;
 printf("\n iResult = %d",iResult); 
 iResult = a - ((b - c) - d); 
 printf("\n iResult = %d",iResult);
 iResult = a % (b % c) * d * e;
 printf("\n iResult = %d",iResult);
 iResult = a + (b - c) * d - e;
 printf("\n iResult = %d",iResult);
 iResult = (a + b) * c + d * e;
 printf("\n iResult = %d",iResult);

	return 0;
}
