#include<stdio.h>
#include<math.h>

int main() {
	
	int a;
	
	scanf("%d", &a);
	
	if ((a >= 1) && (a<= 9)) {
		printf("O valor esta na faixa");
	} else {
		printf("Nao esta na faixa");
	}

	return 0;
	
}
