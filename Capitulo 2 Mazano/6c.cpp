#include<stdio.h>
#include<locale.h>
#include<math.h>




int main() {
	
	setlocale(LC_ALL, "");
	
	float a, v, r;
	
	printf("Insira a altura: ");
	scanf("%f", &a);
	
	printf("Insiria o raio: ");
	scanf("%f", &r);
	
	v = M_PI * pow(r,2) * a;
	
	printf("O volume da lata é: %.2f", v);
	
}
