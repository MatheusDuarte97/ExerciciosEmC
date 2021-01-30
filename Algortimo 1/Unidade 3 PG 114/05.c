#include<stdio.h>
#include<locale.h>



int main() {
	
	setlocale(LC_ALL, "");
	
	int num, cont = 0;
	
	scanf("%d", &num);
	
	while(num >= 0) {
	
	cont = cont + 1;	
	scanf("%d", &num);	
		
	}
	
	printf("Foram digitados: %d positivos", cont);
	
}
