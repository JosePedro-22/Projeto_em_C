#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct list{

    int id, estadia;
    char lo_part[101], lo_dest[101];
    float valor_passagem;
    
    struct list *prox;
}new_type;

new_type* listaGeral; 

void front();
new_type* criar_lista(void);
new_type* new_no(new_type* lista,int id,int estadia,float valor_passagem,char lo_part[],char lo_dest[]);
void print_list(new_type *lista);
int valida_lista(new_type *lista);
int new_id(new_type *lista);
int size_list(new_type *lista);
void delet_no(new_type **primeiro_no, int id);
void cabecalho();
void rodape();
void buy_ticket();
void list_ticket();
void edit_ticket();
void delet_ticket();
void menu_global();
int valor_ticket();

int main(void){
    char aux;
    listaGeral = criar_lista();

    cabecalho();
    printf("\n\n");
    front();
    scanf("%s", &aux);
    if (aux == 's')
        menu_global();
    else{
        rodape();
        exit(0);
    }
}


//criar a lista: e a retorna-a vazia
new_type* criar_lista(void){
    return NULL;
}

//Inserção na lista
new_type* new_no(new_type* lista,int id,int estadia,float valor_passagem,char lo_part[],char lo_dest[]){
    new_type * no = (new_type*)malloc(sizeof(new_type));
    
    no -> id = id;
    no -> estadia = estadia;
    strcpy(no -> lo_part, lo_part);
    strcpy(no -> lo_dest, lo_dest);
    no -> valor_passagem = valor_passagem;
    no -> prox = lista;
    return no;
}

void print_list(new_type *lista){
    new_type *p;//declarar ponteiro auxiliar p
    for(p = lista; p != NULL; p = p -> prox){
        printf("\nIdentificador da passagem: %d\n", p->id);
        printf("Dias de Estadia: %d\n", p->estadia);
        printf("Valor da passagem R$ %.2f\n", p->valor_passagem);
        printf("local de Partida: %s", p->lo_part);
        printf("local de Destino: %s\n", p->lo_dest);
    }
}

int valida_lista(new_type *lista){
    if(lista == NULL){
        return 1;//retorna 1 se vazia e 0 senão
    }else{
        return 0;
    }
}

int new_id(new_type *lista){
    new_type *p;//declarar ponteiro auxiliar p
    int maxId=0;
    for(p = lista; p != NULL; p = p -> prox){
        if(maxId < p->id)
            maxId = p->id;
    }
    return maxId;
}

int size_list(new_type *lista){
    int i=0;
    new_type *p;

    for(p = lista; p != NULL; p = p -> prox){
        i++;
    }
    return i;
}

void delet_no(new_type **primeiro_no, int id){
    new_type* temp = *primeiro_no, *anterior;

    if (temp != NULL && temp->id == id)
    {
        *primeiro_no = temp->prox;
        free(temp);
        return;
    }

    while (temp != NULL && temp->id != id)
    {
        anterior = temp;
        temp = temp->prox;
    }

    if (temp == NULL) return;

    anterior->prox = temp->prox;

    free(temp);


    return;
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
    printf("   ==================== FACULDADE PITAGORAS - SAO LUIS =====================\n");
    printf("   ===================== CURSO: CIENCIA DA COMPUTACAO ======================\n");
    printf("   =================== AUTORES: JOSE PEDRO SOUZA MESQUITA ==================\n");
    printf("   ======================= EMERSON CARLOS ROCHA AMORIM =====================\n");
    printf("   ======================== DENISE LEMOS DOS SANTOS ========================\n");
    printf("   ==================== VALDIR RODRIGUES DA SILVA NETO =====================\n");
    printf("   ===================== ENZO LUIS FERNANDES PRASERES ======================\n");
    printf("   ===================== LEONARDO VINICIUS DINIZ SILVA =====================\n");
    printf("   =========================================================================\n");
    printf("   =========================================================================\n");
}

void rodape(){
    printf("\n\nCreditos: A Equipe - Todos os direitos reservado.\n");
}

void buy_ticket(){
    system("cls");
    printf("********************************************************\n");
    printf("******************** Coloque os dados! ********************\n");
    printf("********************************************************\n\n");

    char op;

    do{
        system("cls");
        printf("********************************************************\n");
        printf("******************** Coloque os dados! ********************\n");
        printf("********************************************************\n\n");

        //int id;
        //char descricao[100];
        //float valor;

        int id, estadia;
        float valor_passagem;
        char lo_part[101], lo_dest[101];

        if(valida_lista(listaGeral))
            id = 1;
        else
            id = new_id(listaGeral)+1;
        
        fflush(stdin);
        
        printf("\n\nDe onde deseja partir ?\n");
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
        printf("\nDigite o local!\n\n");

        fgets(lo_part, sizeof lo_part, stdin);
        
        fflush(stdin);

        printf("\n\nPara onde deseja ir chegar ?\n");
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
        printf("\nDigite o local!\n\n");

        fgets(lo_dest, sizeof lo_dest, stdin);

        fflush(stdin);

        printf("\n\nDias de Estadia\n");
        scanf("%d",&estadia);
        getchar();

        valor_passagem = valor_ticket(estadia);

        //scanf("%f",&valor);
        

        listaGeral = new_no(listaGeral,id,estadia,valor_passagem,lo_part,lo_dest);

        system("cls");
        printf("********************************************************\n");
        printf("******************** Coloque os dados! ********************\n");
        printf("********************************************************\n\n");
        print_list(listaGeral);

        printf("\nDeseja cadastrar um novo item? (s/n) ");
        scanf("%s", &op);
        getchar();

    }while(op=='s');

    menu_global();
}

void list_ticket(){

    char op;

    do{
        system("cls");
    printf("********************************************************\n");
    printf("******************** listando os dados! ********************\n");
    printf("********************************************************\n\n");

        if(size_list(listaGeral) > 0){
            print_list(listaGeral);

        }else{
            printf("\nNão existem registros cadastrados.\n");
        }

        printf("\nDeseja voltar ao menu principal? (s/n) ");
        scanf("%s", &op);
        getchar();

    }while(op=='n');

    menu_global();
}

void edit_ticket(){
    /*char op;
    int id;
    int achou = 0;
    do{
        system("cls");
        printf("********************************************************\n");
        printf("******************** Coloque os dados! ********************\n");
        printf("********************************************************\n\n");

        printf("Digite o codigo do item: ");
        scanf("%d", &id);

        new_type *p;
        char descricao[100];
        float valor;

        for(p = listaGeral; p != NULL; p = p -> prox){
            if(p->id == id){
                achou = 1;

                fflush(stdin);
                printf("Digite o valor do item: ");
                scanf("%f",&valor);
                getchar();

                fflush(stdin);
                printf("\nDigite a descrição do item: ");
                fgets(descricao, sizeof descricao, stdin);

                strcpy(p->descricao, descricao);
                p->valor = valor;
            }
        }
        if(!achou){
            printf("\n*********************************************");
            printf("\nNão foi encontrado nenhum item com o id %d.", id);
            printf("\n*********************************************\n");
        }

        printf("\nDeseja realizar outra busca? (s/n) ");
        scanf("%s", &op);
        getchar();

    }while(op=='s');

    menu_global();
    */
}

void delet_ticket(){
    char op;
    int id;
    int achou = 0;
    do{
        system("cls");
    printf("********************************************************\n");
    printf("******************** cancelando a passagem! ********************\n");
    printf("********************************************************\n\n");

        printf("Digite o codigo do item a ser EXCLUÍDO: ");
        scanf("%d", &id);

        new_type *p;
        char descricao[100];
        float valor;
        int resultado=0;

        delet_no(&listaGeral,id);

        if(size_list(listaGeral) > 0){
            printf("\nListagem de itens atualizada:\n");
            print_list(listaGeral);

        }else{
            printf("\nNão existem registros cadastrados.\n");
        }

        fflush(stdin);
        printf("\nDeseja realizar outra busca? (s/n) ");
        scanf("%s", &op);
        getchar();

    }while(op=='s');

    menu_global();
}

void menu_global(){
    int op;


    do{
        system("clear||cls");
        printf("                 '##::::'##:'########:'##::: ##:'##::::'##:         \n");
        printf("                  ###::'###: ##.....:: ###:: ##: ##:::: ##:         \n");
        printf("                  ####'####: ##::::::: ####: ##: ##:::: ##:         \n");
        printf("                  ## ### ##: ######::: ## ## ##: ##:::: ##:         \n");
        printf("                  ##. #: ##: ##...:::: ##. ####: ##:::: ##:         \n");
        printf("                  ##:.:: ##: ##::::::: ##:. ###: ##:::: ##:         \n");
        printf("                  ##:::: ##: ########: ##::. ##:. #######::         \n");
        printf("                 ..:::::..::........::..::::..:::.......:::         \n");
        printf("\n");
        printf("                  Escolha dentre as opcoes abaixo:\n");
        printf("-----------------------------------------------------------------\n");
        printf("                  1 - CADASTRAR ITEM;\n");
        printf("                  2 - LISTAR ITENS;\n");
        printf("                  3 - ALTERAR ITEM;\n");
        printf("                  4 - EXCLUIR ITEM;\n");
        printf("                  5 - SAIR DO SISTEMA\n");
        printf("-----------------------------------------------------------------\n");
            
        printf("                  ");
        scanf("%d", &op);
        getchar();

        switch(op){
            case 1:
                buy_ticket();
                break;
            case 2:
                list_ticket();
                break;
            case 3:
                edit_ticket();
                break;
            case 4:
                delet_ticket();
                break;
            case 5: printf("\n\n                  Programa finalizado!\n");
                exit(0);
        }
    }while(op!=5);
}
void front(){
    printf("    d8888b. d88888b .88b  d88.   db    db d888888b d8b   db d8888b.  .d88b.  \n");
    printf("    88  `8D 88'     88'YbdP`88   88    88   `88'   888o  88 88  `8D .8P  Y8. \n");
    printf("    88oooY' 88ooooo 88  88  88   Y8    8P    88    88V8o 88 88   88 88    88 \n");
    printf("    88~~~b. 88~~~~~ 88  88  88   `8b  d8'    88    88 V8o88 88   88 88    88 \n");
    printf("    88   8D 88.     88  88  88    `8bd8'    .88.   88  V888 88  .8D `8b  d8' \n");
    printf("    Y8888P' Y88888P YP  YP  YP      YP    Y888888P VP   V8P Y8888D'  `Y88P'  \n"); 
    printf("                                                                             \n");
    printf("                                                                             \n");
    printf("                     .d888b.  .d88b.       .d888b.  .d88b.                   \n");
    printf("                     VP  `8D .8P  88.      VP  `8D .8P  88.                  \n");
    printf("                        odD' 88  d'88         odD' 88  d'88                  \n");
    printf("                      .88'   88 d' 88       .88'   88 d' 88                  \n");
    printf("                     j88.    `88  d8' ws   j88.    `88  d8'                  \n");
    printf("                    888888D  `Y88P'  vsaa 888888D  `Y88P'                    \n");
    printf("                                                                             \n");
    printf("                                                                             \n");
    printf("           .88b  d88. d888888b db      db   db  .d8b.  .d8888.               \n");
    printf("           88'YbdP`88   `88'   88      88   88 d8' `8b 88'  YP               \n");
    printf("           88  88  88    88    88      88ooo88 88ooo88 `8bo.                 \n");
    printf("           88  88  88    88    88      88~~~88 88~~~88   `Y8b.               \n");
    printf("           88  88  88   .88.   88booo. 88   88 88   88 db   8D               \n");
    printf("           YP  YP  YP Y888888P Y88888P YP   YP YP   YP `8888Y'               \n");
    printf("                                                                             \n");
    printf("           Deseja acessar o nosso programa de vendas de passagens?           \n");
    printf("                               s - SIM\n");
    printf("                               n - NAO\n");
}
int valor_ticket(int x){
    float a,b,c,d,e;
    a = 432;
    b = 235;
    c = 643;
    d = 754;
    e = 452;
    printf("Companhias Aereas Disponiveis\n");
    printf("\nCodigo 1. Qatar Airways R$ %.2f\n", a);
    printf("Codigo 2. Singapore Airlines R$ %.2f\n", b);
    printf("Codigo 3. Emirates R$ %.2f\n", a);
    printf("Codigo 4. Air France R$ %.2f\n", c);
    printf("Codigo 5. Avianca R$ %.2f\n", d);
    printf("Codigo 6. Azul R$ %.2f\n", e);
    printf("Codigo 7. LATAM R$ %.2f\n", b);

    printf("\nQual companhia aeria deseja ir?\n");
    printf("Digite o codigo da passagem aeria!\n\n");

    int num;
    scanf("%d", &num);
    switch(num){
        case 1:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return a;
            break; 
        case 2:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return b;
            break;
        case 3:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return a;
            break;
        case 4:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return c;
            break;
        case 5:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return d;
            break;
        case 6:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return e;
            break;
        case 7:printf("\n\n\n   Passagem comprada, obrigado e volte sempre.\n\n"); return b;
            break;
        default:printf("\n\n\n   Desculpe sua opcao de Companhia Aerea indisponivel!\n"); return 0;
    }
}