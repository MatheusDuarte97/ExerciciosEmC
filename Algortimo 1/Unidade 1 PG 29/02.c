#include<stdio.h>

int main() {
	float l, a,p;
	printf("Lado: ");
	scanf("%f", &l);
	
	a = l + l;
	p = 4 * l;
	
	printf("Area: %.2f\n", a);
	printf("Perimetro: %.2f", p);
}
