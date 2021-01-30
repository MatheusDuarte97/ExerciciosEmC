#include<stdio.h>


int main() {
	
	int mat = 0;
	char nome[30];
	float sal = 0, novoSal = 0, totVendas = 0;
	
	scanf("%s", nome);
	scanf("%d", &mat);
	scanf("%f", &sal);
	scanf("%f", &totVendas);
	
	if (totVendas < 1500) {
		
		com = totVendas * (100/2);
		salNovo = com + sal;
	} else {
		com = totVendas * (100/4);
		salNovo = com + sal;
	}
	return 0;
	
}
