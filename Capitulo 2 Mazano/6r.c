#include<stdio.h>
#include<locale.h>

int main() {
	
	setlocale(LC_ALL, "");
	int Va,Vb,Vc, // Votos validos
		Vnt, // Votos nulos
		Vbt, // Votos em brancos
		Nte,
		Ntv
		;
		
	float prve, prva, prvb, prvc, prvn, prvbranco;	 
	
	printf("Votos validos candidato A: ");
	scanf("%d", &Va);
	printf("Votos validos candidato B: ");
	scanf("%d", &Vb);
	printf("Votos validos candidato C: ");
	scanf("%d", &Vc);
	
	printf("Total votos nulos: ");
	scanf("%d", &Vnt);
	
	printf("Total votos brancos: ");
	scanf("%d", &Vbt);
	
	Nte = Va + Vb + Vc + Vnt + Vbt; // Numero total de eleitores
	Ntv = Va + Vb + Vc; // Numero total de votos validos
	prve = ((float)Ntv) * 100 / Nte;
	prva = ((float)Va) * 100 / Nte;
	prvb = ((float)Vb) * 100 / Nte;
	prvc = ((float)Vc) * 100 / Nte;
	prvn = ((float)Vn) * 100 / Nte;
	prvbranco = ((float)Vbt) * 100 / Nte;
	printf("Numero total de eleitores: %d\n", Nte);
	printf("Percentual Votos validos em relação aos eleitores: %.2f%% \n", prve);
	printf("Percentual Votos validos do A em relação aos eleitores: %.2f%% \n", prva);
	printf("Percentual Votos validos do B em relação aos eleitores: %.2f%% \n", prvb);
	printf("Percentual Votos validos do C em relação aos eleitores: %.2f%% \n", prvc);
	printf("Percentual Votos nulos em relação aos eleitores: %.2f%% \n", prvn); 
	printf("Percentual Votos Brancos em relação aos eleitores: %.2f%% \n", prvbranco);
	return 0;
	}
