#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	
	setlocale(LC_ALL, "");
	float r, a;
	scanf("%f", &r);
	
	a = M_PI * pow(r,2);
	
	printf("%.2f", a);
}
