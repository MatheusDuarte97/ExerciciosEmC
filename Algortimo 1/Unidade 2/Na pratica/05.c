#include<stdio.h>


int main() {
	

	char tipo;
	float km, kmlitros;
	
	scanf("%c", &tipo);
	scanf("%f", &km);
	switch(tipo) {
		
		case 'A':
			kmlitros = km / 26.0;
			printf("Consumo: %.2fL", kmlitros);
			break;
		case 'B':
			kmlitros = km / 20.0;
			printf("Consumo: %.2fL", kmlitros);
			break;
		case 'C':
			kmlitros = km / 7.0;
			printf("Consumo: %.2fL", kmlitros);
					
	}
	
	return 0;
	
}
