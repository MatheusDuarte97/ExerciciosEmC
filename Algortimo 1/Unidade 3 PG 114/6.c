#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "");
	
	int num_pedido, qtd;
	char data[12];
	float preco_unitario,custo, totalCompras;
	
	printf("Informe o numero do pedido: ");
	scanf("%d", &num_pedido);
	
	while(num_pedido != 0) {
		custo = 0;
		preco_unitario = 0;
		qtd = 0;
		printf("Insira a data: ");
		scanf("%s", data);
		printf("Preço unitario: ");
		scanf("%f", &preco_unitario);
		fflush(stdin);
		printf("Quantidade: ");
		scanf("%d", &qtd);
		custo = qtd * preco_unitario;
		totalCompras = totalCompras + custo;
		printf("-------------------------------------------------------\n");
		printf("Valor do pedido N°.%d: R$%.2f \n", num_pedido, custo);
		printf("-------------------------------------------------------\n");
		printf("Informe o numero do pedido: ");
		scanf("%d", &num_pedido);
	}
	printf("\n");
	printf("-------------------------------------------------------\n");
	printf("Valor total da compra: R$%.2f\n", totalCompras);
	printf("-------------------------------------------------------\n");
	return 0;
}
