#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
	char localPartida[100];
	char localDestino[100];
	int dias_de_Estadia;
} Projeto;

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

	printf("Ola digite o codigo da Companhia para adquirir sua passagem!\n");
	vazio();
	scanf("%d", &num);

		switch(num){
			case 423:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break; 
			case 721:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			case 836:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			case 041:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			case 524:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			case 828:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			case 951:vazio_1(); printf("Passagem comprada, obrigado e volte sempre.\n");
				break;
			default: printf("Desculpe sua opcao de Companhia Aerea indisponivel!\n");
		}
}

void fundo(){
	for (int i = 0; i < 6; ++i)
	{
		printf("*******************************************************\n");
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
	//printf("menu 1. comprar 2. exit\n");
}
int main(){
	char caracter;
	int op;
	Projeto chamada;

	tela_1();
	vazio();
	vazio();
	scanf("%s", &caracter);
	if(caracter == 's'||'S'){
		system("cls");

		tela_2();
		vazio();
		vazio_1();
		scanf("%d", &op);
		system("cls");
		if(op == 1)
		{
			fundo();
			vazio();
			printf("Digite o seu Local de Partida\n");
			vazio();
			gets(chamada.localPartida);
			/*fundo();
			system("cls");

			fundo();
			vazio();
			printf("Digite o seu Local de Destino\n");
			vazio();
			gets(chamada.localDestino);
			fundo();
			system("cls");

			fundo();
			vazio();
			printf("Dias de Estadia\n");
			vazio();
			scanf("%d", &chamada.dias_de_Estadia);
			fundo();
			system("cls");

			fundo();
			display_op(chamada.dias_de_Estadia/2);
			fundo();


			switch_case();
			fundo();
			*/
		}
		else if(caracter == 'n'||'N')
		{
			//printf("ok\n");
			//exit();
			return 0;
		}
	}
	else return 0;
}
//http://www.network-science.de/ascii/
/*


                                                    
*/