#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num, maior=0, menor=0, aux = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	menor = num;
	maior = num;
	while(num != 0) {
		if (num > maior) {
			
			maior = num;
			
	} 
	
		if (num < menor) {
			
			menor = num;
		}
	
	
		printf("Digite um número: ");
		scanf("%d", &num);
	
	}
	
	
	
	printf("%d\n", maior);
	printf("%d\n", menor);
}
