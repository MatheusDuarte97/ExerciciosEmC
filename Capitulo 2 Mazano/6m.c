#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int a,b,c,resultado;
	
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	resultado = pow(a,2) + pow(b,2) + pow(c,2);
	
	printf("resultado: %d", resultado);
	
}
