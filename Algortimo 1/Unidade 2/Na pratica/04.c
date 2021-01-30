#include<stdio.h>


int main() {
	
	float  a, ideal = 0;
	char s;
	
	scanf("%c",&s);
	scanf("%f", &a);
	
	
	switch (s) {
		case 'm':
			ideal = (72.7*a)-58;
			printf("Peso ideal: %.2f", ideal);
			break;
		case 'f':
			ideal = (62.1*a)-44.7;
			printf("Peso ideal: %.2f", ideal);
			break;
		default:
			printf("Codigo invalido");
			break;		
	}
	return 0;
	
}
