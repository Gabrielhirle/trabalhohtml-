#include <stdio.h>

    /*Um restaurante que irá inaugurar precisa da sua ajuda.
Crie um algoritmo em C que peça os dados do cliente para cadastro.

Informar cliente? S/N
S= nome cliente (buscar com o comparador de String) se existe(ok)
Se não existe 👇🏼

Nome:
Endereço:
Telefone:

Depois de o menu:
1 patros feitos
2 bebidas
3 finalizar

Menu de pratos feitos:
1- panqueca: 15 R$
2-  frango a parmegiana: R$14
3- bife bovino:  R$18
0- finalizar
Menu bebidas:
1- água : 4 R$
2 - refrigerante: 5 R$
3 suco de laranja: 7 R$
0- finalizar
Imprima o valor da compra e os dados do cliente para entrega.*/

int numCliente = 0;

int menu ();

struct cadastro {
    char nome[20];
    char endereco[100];
    int telefone;
};



int main() {
    int i;

    struct cadastro c1[10];
    char nomeCliente[20];
    int pedido;
    int achou = 0;
    float valor[10];
    printf("1-Fazer pedido\n0-finalizar\n");
    scanf("%d", &pedido);

    while (pedido == 1) {
        printf("Nome:");
        scanf(" %[^\n]s", nomeCliente);

        for (i = 0; i < numCliente; i++) {
            if (strcmp(nomeCliente, c1[i].nome) == 0) {
                achou = 1;
                printf("''''O USUARIO JA FOI CADASTRADO'''''.\n");
            }
        }

        if (achou == 0) {
            strcpy(c1[numCliente].nome, nomeCliente);
            printf("Endereco:");
            scanf(" %[^\n]s", c1[numCliente].endereco);
            printf("Telefone:");
            scanf("%d", &c1[numCliente].telefone);
            numCliente++;
        }

        printf ("****MENU***\n");
        int menu;//*********
        printf ("1-Prato feito\n2-Bebidas\n0-FINALIZAR\n");
        scanf ("%d", &menu);


         int prato; //*****
         int bebida; //'''''''''''

        while (menu != 0){
            if (menu == 1){

                printf ("**CARDAPIO DE PRATOS***\n");
                printf ("1- panqueca: R$15\n2- frango a parmegiana: R$14\n3- bife bovino: R$18\n0- finalizar\n");
                scanf ("%d", &prato);

                while (prato != 0){
                    if (prato == 1){
                        valor[i] += 15;
                    }
                    else if (prato == 2){
                        valor[i] +=14;
                    }
                    else if (prato == 3){
                        valor[i] += 18;
                    }
                    else if (prato < 3) {
                        printf ("invalido");
                    }
                    printf ("**CARDAPIO DE PRATOS***\n");
                    printf ("1- panqueca: R$15\n2- frango a parmegiana: R$14\n3- bife bovino: R$18\n0- finalizar\n");
                    scanf ("%d", &prato);
                }
            }



            if (menu == 2){

                printf("**CARDAPIO DE BEBIDAS***\n");
                printf ("1- agua: R$4\n2- refrigerante: R$5\n3- suco de laranja: R$7\n0- finalizar\n");
                scanf ("%d", &bebida);

                while (bebida != 0){
                    if (bebida == 1){
                        valor[i] += 4;
                    }
                    else if (bebida == 2){
                        valor[i] += 5;
                    }
                    else if (bebida == 3){
                        valor[i] += 7;
                    }
                    else if (bebida < 3) {
                        printf ("invalido\n");
                    }
                    printf("**CARDAPIO DE BEBIDAS***\n");
                    printf ("1- agua: R$4\n2- refrigerante: R$5\n3- suco de laranja: R$7\n0- finalizar\n");
                    scanf ("%d", &bebida);
                }
            }

            printf ("****MENU***\n");

        menu;//*********
        printf ("1-Prato feito\n2-Bebidas\n0-FINALIZAR\n");
        scanf ("%d", &menu);
        printf(">>>>>MENU<<<<<\n");
        }
        printf("1-Fazer pedido\n0-finalizar\n");
    scanf("%d", &pedido);

    }

  //   printf("** Pedidos Finalizados **\n");
    for (i = 0; i < numCliente; i++) {
        printf ("--------------------------------------------------------\n");
        printf("%s\n%s\n%d\n", c1[i].nome, c1[i].endereco, c1[i].telefone);
        printf("Total a pagar: R$ %.2f \n", valor[i]);
        printf ("--------------------------------------------------------\n");
    }

    return 0;
    }
