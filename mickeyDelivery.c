// projeto de lógica TADS 1 semestre 
// GUSTAVO LOURENÇO DE FREITAS SP3049566
// HELENA DE BRITO 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>




int main (void){
	void menuCombo (void);
	
	setlocale (LC_ALL, "Portuguese");
	
	//variável da main 
	char opcaoInicioPedido;
	char opcaoComboUnidade;
		
	printf("==========  Bem vinde ao famoso FAST FOOD\n");
	printf("==========  Gostaria de pedir algo?\n");
	printf("==========  Aperte [S] para sim e [N] para não\n\n");
	opcaoInicioPedido = getch();
	fflush(stdin);
	
	
	if (opcaoInicioPedido == 'S' || opcaoInicioPedido == 's'){
		printf("==========  Então vamos lá, você vai querer combo ou unidade?\n");	
	} else	{
		printf("==========  Obrigado por ter vindo\n\n");
	system ("cls"); 
	// FUNÇÃO PARA FECHAR O PROGRAMA
	getche();
	}
	
	printf("==========  Aperte [C] para combo e [U] para unidade\n\n");
	opcaoComboUnidade = getch();
	fflush(stdin);
	
	system ("cls"); 
	getch();
	
	
	if(opcaoComboUnidade == 'C' || opcaoComboUnidade == 'c'){
	printf("==========  Escolha qual combo  você vai querer\n\n\n");
	menuCombo();	
	}else{
	printf("========== Escolha a sua unidade  ==========\n\n");
	menuUnidade();
	}
	
	
	
	
	

return (0);	
}

	void menuCombo (void){
	
	//variáveis menuCombo
	float precoCombo;	
	int quantidadeComboPedido; 
	float valorTotalCombo;
	char pedido;
	
	printf(" ================= 1 Combo pequeno ===================== \n");
	printf("= 1 x-salada, 1 refrigerante pequeno e 1 batata pequena =\n");
	printf("			R$10,00							 \n\n");
	printf("================== 2 Combo médio ========================\n");
	printf("=== 1 x-salada, 1 refrigerante médio e 1 batata média ===\n");
	printf("			R$15,00                            \n\n");
	printf("================== 3 Combo Grande =======================\n");
	printf("==  1 x-salada, 1 refrigerante grande, 1 batata grande ==\n");
	printf("			R$20,00							 \n");
	printf("=========================================================\n");
	
	// fflush(stdin);
	pedido = getch();
	
		
	
	switch (pedido){
		case '1':
		precoCombo = 10; 
		printf("Quantos combos pequenos você vai querer?\n");
		scanf("%d", &quantidadeComboPedido);	
		
	//	printf("O valor do seu pedido é de R$%.2f", valorTotalCombo);
		break;
		
		case '2':
		precoCombo = 15;
		printf("Quantos combos médios você vai querer?\n");
		scanf("%d", &quantidadeComboPedido);
		//valorTotalCombo = precoCombo * quantidadeComboPedido;
	//	printf("O valor do seu pedido é de R$%.2f", valorTotalCombo);
		break; 
		
		case '3':
		precoCombo = 20;
		printf("Quantos combos grandes você vai querer?\n");
		scanf("%d", &quantidadeComboPedido);
	}
	
	valorTotalCombo = precoCombo * quantidadeComboPedido;
	printf("O valor do seu pedido é de R$%.2f", valorTotalCombo);
	
	fflush(stdin);
}

void menuUnidade(void){

	printf(" ================= 1 X-salada ======================= \n");
	//printf("= 1 x-salada, 1 refrigerante pequeno e 1 batata pequena =\n");
	printf("			R$5,00							 \n\n");
	printf("================== 2 batata  ========================\n");
	//printf("=== 1 x-salada, 1 refrigerante médio e 1 batata média ===\n");
	printf("			R$3,00                            \n\n");
	printf("================== 3 Refrigerante =======================\n");
//	printf("==  1 x-salada, 1 refrigerante grande, 1 batata grande ==\n");
	printf("			R$4,00							 \n");
	printf("=========================================================\n");
	
}

//char calculoCombo (pedidoCombo) {
//	
//	float valorPedidoCombo;
//	
//	switch (pedidoCombo){
//		
//		case '1'
//		
//	}
//	
//}
