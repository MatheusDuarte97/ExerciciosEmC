#include<stdio.h>
#include<locale.h>
#include<math.h>

int main() {
	setlocale(LC_ALL, "");
	int a,b,dif;
	printf("A: ");
	scanf("%d", &a);
	printf("B: ");
	scanf("%d", &b);	
	
	dif = pow(a,2) - pow(b,2);
	
	printf("%d", dif);

}
