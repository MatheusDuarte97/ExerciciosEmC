#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	
	float a, b, area;
	
	printf("Base: ");
	scanf("%f", &b);
	printf("Altura: ");
	scanf("%f", &a);
	
	while ((b >= 0) && (a >= 0)) {
		area = (b*a)/2;
		printf("Area: %.3f\n", area);
		
		
		printf("Base: ");
		scanf("%f", &b);
		printf("Altura: ");
		scanf("%f", &a);	
	}
}
