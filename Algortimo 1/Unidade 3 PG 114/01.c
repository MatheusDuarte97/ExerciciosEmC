#include<stdio.h>
#include<locale.h>


int main() {
	
	setlocale(LC_ALL, "");
	
	int fat, cont;
	
	scanf("%d", &fat);
	
	cont = fat;
	
	while (cont > 1) {
		
		cont = cont - 1;
		fat = fat * cont;
	}
	
	printf("%d", fat);
}
