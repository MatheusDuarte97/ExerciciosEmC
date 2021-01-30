#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	float c,l,a,vol;
	printf("Comprimento: ");
	scanf("%f", &c);
	printf("Largura: ");
	scanf("%f", &l);
	printf("Altura: ");
	scanf("%f", &a);
	
	vol = c*l*a;
	
	printf("Volume: %.2f", vol);	
	
}
