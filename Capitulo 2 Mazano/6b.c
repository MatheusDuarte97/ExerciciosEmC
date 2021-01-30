#include<stdio.h>
#include<locale.h>


int main() {
	
	setlocale(LC_ALL, "");
	
	float c, f;
	
	printf("Digite uma temperatura em °F: ");
	scanf("%f", &f);
	
	c = (f-32) * 5/9;
	
	printf("A temperatura é: %.2f°C", c);
	
}
