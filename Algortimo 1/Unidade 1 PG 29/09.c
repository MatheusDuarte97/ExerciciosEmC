#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	
	setlocale(LC_ALL, "");
	float area, p, r;
	
	printf("Raio: ");
	scanf("%f", &r);
	
	p = M_PI * r;
	area = M_PI * pow(r,2);
	printf("Perimetro: %.2f\n", r);
	printf("area: %.2f\n", area);
}
