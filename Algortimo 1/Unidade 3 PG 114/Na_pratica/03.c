#include<stdio.h>
#include<locale.h>


int main() {
	setlocale(LC_ALL, "");
	int num;
	
	num = 1;
	while (num<=200) {
		
		if (num % 5 == 0) {
			printf("%d\n", num);
		}
		
		num = num + 1;
	}
	
}
