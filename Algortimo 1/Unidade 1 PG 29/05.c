#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	float base, altura, area;
	
	printf("Base: ");
	scanf("%f", &base);
	printf("Altura: ");
	scanf("%f", &altura);
	
	area = (base*altura)/2;
	
	printf("Area: %.2f\n", area);
}
