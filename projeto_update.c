#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
	int localPartida;
	int localDestino;
	int dias_de_Estadia;
} Projeto;

void LPD(){
	printf("1. SAO LUIS\n");
	printf("2. SAO PAULO\n");
	printf("3. RECIFE\n");
	printf("4. SALVADOR\n");
	printf("5. RIO DE JANEIRO\n");
	printf("6. GRAMADO\n");
	printf("7. OURO PRETO\n");
	printf("8. FORTALEZA\n");
	printf("9. MACEIO\n");
	printf("10. BRASILIA\n");
}

int random_max_min (int y){

    do{
    	if(rand()%y > 200) return rand()%y;
    }while(rand()%y < 200);
}

void vazio(){
	printf("             ");
}

void vazio_1(){
	printf("     ");
}

void display_op(int x){
	vazio_1();
	printf("Companhias Aereas Disponiveis\n");
	printf("\n");
	vazio_1();
	printf("Codigo 423. Qatar Airways R$ %d.00\n", random_max_min(300)*x);
	vazio_1();
	printf("Codigo 721. Singapore Airlines R$ %d.00\n", random_max_min(400)*x);
	vazio_1();
	printf("Codigo 836. Emirates R$ %d.00\n", random_max_min(450)*x);
	vazio_1();
	printf("Codigo 041. Air France R$ %d.00\n", random_max_min(280)*x);
	vazio_1();
	printf("Codigo 524. Avianca R$ %d.00\n", random_max_min(320)*x);
	vazio_1();
	printf("Codigo 828. Azul R$ %d.00\n", random_max_min(330)*x);
	vazio_1();
	printf("Codigo 951. LATAM R$ %d.00\n", random_max_min(450)*x);
}

void switch_case(){
	int num;

	printf("\n\nOla, digite o codigo da Companhia para adquirir sua passagem!\n\n");
	vazio();
	scanf("%d", &num);

		switch(num){
			case 423:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break; 
			case 721:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			case 836:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			case 041:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			case 524:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			case 828:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			case 951:vazio_1(); printf("\n\n\n          Passagem comprada, obrigado e volte sempre.\n\n");
				break;
			default: printf("\n\n\n\n        Desculpe sua opcao de Companhia Aerea indisponivel!\n");
		}
}

void fundo(){
	for (int i = 0; i < 6; ++i)
	{
		printf("******************************************************************\n");
	}
}

void tela_1()
{
	printf("	d8888b. d88888b .88b  d88.   db    db d888888b d8b   db d8888b.  .d88b.  \n");
	printf("	88  `8D 88'     88'YbdP`88   88    88   `88'   888o  88 88  `8D .8P  Y8. \n");
	printf("	88oooY' 88ooooo 88  88  88   Y8    8P    88    88V8o 88 88   88 88    88 \n");
	printf("	88~~~b. 88~~~~~ 88  88  88   `8b  d8'    88    88 V8o88 88   88 88    88 \n");
	printf("	88   8D 88.     88  88  88    `8bd8'    .88.   88  V888 88  .8D `8b  d8' \n");
	printf("	Y8888P' Y88888P YP  YP  YP      YP    Y888888P VP   V8P Y8888D'  `Y88P'  \n"); 
	printf("	                                                                         \n");
	printf("                                                                             \n");
	printf("	                 .d888b.  .d88b.       .d888b.  .d88b.                   \n");
	printf("	                 VP  `8D .8P  88.      VP  `8D .8P  88.                  \n");
	printf("	                    odD' 88  d'88         odD' 88  d'88                  \n");
	printf("	                  .88'   88 d'88       .88'   88 d' 88                   \n");
	printf("	                 j88.    `88  d8' ws   j88.    `88  d8'                  \n");
	printf("	                888888D  `Y88P'  vsaa 888888D  `Y88P'                    \n");
	printf("	                                                                         \n");
	printf("	                                                                         \n");
	printf("	       .88b  d88. d888888b db      db   db  .d8b.  .d8888.               \n");
	printf("	       88'YbdP`88   `88'   88      88   88 d8' `8b 88'  YP               \n");
	printf("	       88  88  88    88    88      88ooo88 88ooo88 `8bo.                 \n");
	printf("	       88  88  88    88    88      88~~~88 88~~~88   `Y8b.               \n");
	printf("	       88  88  88   .88.   88booo. 88   88 88   88 db   8D               \n");
	printf("	       YP  YP  YP Y888888P Y88888P YP   YP YP   YP `8888Y'               \n");
	printf("                                                                             \n");
	printf("                      Deseja acessar o menu?\n");
	printf("                      Sim? s\n");
	printf("                      Nao? n\n");
}

void tela_2(){                           
    printf("       '##::::'##:'########:'##::: ##:'##::::'##:         \n");
    printf("        ###::'###: ##.....:: ###:: ##: ##:::: ##:         \n");
    printf("        ####'####: ##::::::: ####: ##: ##:::: ##:         \n");
    printf("        ## ### ##: ######::: ## ## ##: ##:::: ##:         \n");
    printf("        ##. #: ##: ##...:::: ##. ####: ##:::: ##:         \n");
    printf("        ##:.:: ##: ##::::::: ##:. ###: ##:::: ##:         \n");
    printf("        ##:::: ##: ########: ##::. ##:. #######::         \n");
    printf("       ..:::::..::........::..::::..:::.......:::         \n");
    printf("                                                          \n");
	printf("		1. Comprar sua Passagen\n");
	printf("		2. Exit\n");
}

void cabecalho(){
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	printf("   =================SISTEMA DE COMPRA DE PASSAGEN AERIAS====================\n");
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	printf("   =====================FACULDADE PITAGORAS - SAO LUIS======================\n");
	printf("   ======================CURSO: CIENCIA DA COMPUTACAO=======================\n");
	printf("   ====================AUTOR: JOSE PEDRO SOUZA MESQUITA=====================\n");
	printf("   =========================================================================\n");
	printf("   =========================================================================\n");
	
}
void rodape(){
	printf("\n\nCreditos: Jose Pedro Souza Mesquita - Todos os direitos reservado.\n");
	printf("                https://github.com/JosePedro-22\n");
	printf("                 josepedromesquita@hotmail.com\n");
}
int main(){
	char caracter;
	int op;
	Projeto chamada;

	cabecalho();
	tela_1();
	vazio();
	vazio();
	scanf("%s", &caracter);
	fflush(stdin);

	if(caracter == 's'||'S'){
		system("cls");

		tela_2();
		vazio();
		vazio_1();
		scanf("%d", &op);
		fflush(stdin);
		system("cls");
		if(op == 1)
		{
			
			fundo();
			vazio();
			printf("De onde voce quer partir ?\n");
			LPD();
			printf("Digite o codigo do Local de Partida\n");
			scanf("%d", &chamada.localPartida);
			fflush(stdin);
			fundo();
			system("cls");
			
			fundo();
			vazio();
			printf("Para onde voce quer chegar ?\n");
			LPD();
			printf("Digite o codigo do Local de Destino\n");
			scanf("%d", &chamada.localDestino);
			fflush(stdin);
			fundo();
			system("cls");
			
			fundo();
			vazio();
			printf("Dias de Estadia\n");
			vazio();
			scanf("%d", &chamada.dias_de_Estadia);
			fflush(stdin);
			fundo();
			system("cls");
			
			fundo();
			display_op(chamada.dias_de_Estadia/2);
			fundo();


			switch_case();
			fundo();
			printf("\n\n");
			rodape();
			
		}
		else if(caracter == 'n'||'N')
		{
			printf("\n\n");
			rodape();
			return 0;
		}

	}
	else{
		printf("\n\n");
		rodape();
		return 0;
	}
}
