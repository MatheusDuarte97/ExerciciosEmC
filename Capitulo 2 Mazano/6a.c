#include<stdio.h>
#include<locale.h>
 // Conversão Celsius to Fahrenheit
int main() {
	
	setlocale(LC_ALL, "");
	
	float celsius;
	float f;
	
	printf("Digite a temperatura em Celsius: ");
	scanf("%f", &celsius);
	
	f = (9 * celsius + 160) / 5;
	
	printf("A temperatura em Fahrenheit e: %.2f°F", f);
}
