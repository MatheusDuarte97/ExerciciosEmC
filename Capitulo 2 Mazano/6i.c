#include<stdio.h>
#include<locale.h>
#include <math.h>

int main() {
	
	setlocale(LC_ALL, "");
	
	int num,quad;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	quad = pow(num,2);
	printf("Quadrado do numero é: %d", quad);
}
