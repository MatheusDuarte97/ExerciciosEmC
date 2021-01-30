#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	float p,v,t,tempo;
	
	printf("Valor da prestação: ");
	scanf("%f", &v);
	printf("Tempo: ");
	scanf("%f", &tempo);
	printf("Digite a taxa: ");
	scanf("%f", &t);
	
	p = v + (v*(t/100)*tempo);
	
	printf("Valor: R$%.2f", p);
}
