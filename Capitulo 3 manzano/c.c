#include<stdio.h>


int main() {
	
	float a,b,c,d,media;
	
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	media = (a+b+c+d)/4;
	
	if (media >= 5) {
		printf("Media: %.1f\n", media);
		printf("Aprovado!!!");
	} else {
		printf("Media: %.1f\n", media);
		printf("Reprovado");
	}
	
	return 0;
	
}
