#include<stdio.h>
#include<locale.h>
#include<string.h>


int main () {
	
	setlocale(LC_ALL, "");
	
	char  name[30], biggerNameM[30], biggerNameF[30], gender[15];
	int   cont = 0, age = 0;
	float sum=0, media = 0, bigger = 0, biggerWeight = 0, height = 0, 
	      weight = 0;
	
	printf("Name: ");
	scanf("%s", name);
	fflush(stdin);
	while ((strcmp(name, "end") != 0)) {
		
		printf("Male(M) or Female(F): ");
		scanf("%s", gender); //male male
		printf("weight: ");
		scanf("%f", &weight);
		printf("Height: ");
		scanf("%f", &height); /// 1.80 1.85	
		printf("Age: ");
		scanf("%d", &age);
		fflush(stdin);
		
		sum = sum + age;
		
		if (age > 0) {
			
			cont = cont + 1;
			media = sum / cont;
		}
		
		if (strcmp(gender, "m") == 0) { // male V male v

			if (height > bigger) { // 1.80 > 0 1.85 > 1.80 V
				bigger = height; // 1.80 >> bigger 185 >> bigger
				strncpy(biggerNameM, name, 30);
			}
		} //  gender male
		
		if (strcmp(gender, "f") == 0) {
			
			if (weight > biggerWeight) {
				
				biggerWeight = weight;
				strncpy(biggerNameF, name, 30);
			}
			
		} //  gender Female
		
		
		printf("name: ");
		scanf("%s", name);
		
	}
	printf("Media: %.2f\n\n", media);
	printf("Name height(MALE): %s\n\n", biggerNameM);
	printf("Name Weight(FEMALE): %s\n", biggerNameF);
	return 0;
	
}
