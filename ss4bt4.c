#include <stdio.h>
#include <stdlib.h>


int main() {
	int r,h;
	float v;
	printf("nhap chieu cao: ");
	scanf("%d",&h);
	printf ("nhap ban kinh day: ");
	scanf ("%d",&r);
	v=r*r*3.14*h;
	printf ("the tich hinh tru: %f",v);
	return 0;
}
