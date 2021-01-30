#include<stdio.h>


int main() {
	
	int i, tab;
	
	for(i=1;i<=10;i++) {
		printf("\nTabuada do: %d\n", i);
		for(tab=1;tab<=10;tab++) {
			printf("%d X %d = %d\n", i, tab, i*tab);
		}
	}
	
}
