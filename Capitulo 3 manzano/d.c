#include<stdio.h>


int main() {
	
	float a,b,c,d,media, exame, novaMedia;
	
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	media = (a+b+c+d)/4;
	
	if (media >= 7) {
		printf("Media: %.1f\n", media);
		printf("Aprovado!!!");
	} else {
		scanf("%f", &exame);
		novaMedia = (exame+media)/2;
		if (novaMedia >= 5) {
		
		printf("Media: %.1f\n", novaMedia);
		printf("Aprovado por exame");
		} else {
			printf("Reprovado");
		}
	}
	
	return 0;
	
}
