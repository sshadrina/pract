#include <stdio.h>
#include <math.h>

int main(){
	float x;
	printf("Enter x:");
	scanf("%f", &x);
	float x1, x2;
	x1=exp(-abs(x))*sin(x);
	x2=exp(-abs(x))*cos(x);
	printf("f(x)=%f\n", x1);
	printf("g(x)=%f\n", x2);
	return 0;
}
