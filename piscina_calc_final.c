#include <stdio.h>
#include <stdlib.h>  // Para system()
#include <conio.h>  // Para getch()

int main() {
    int opcao = 1;
    float raio, largura, comprimento, profundidade, metragem, preco, valorfinal;
    char nome[30];

    while (opcao != 0) {
        system("cls");
        printf("     MENU");
        printf("\n 1 - PISCINAS RETANGULARES");
        printf("\n 2 - PISCINAS REDONDAS");
        printf("\n 0 - ENCERRAR PROGRAMA");
        printf("\n\n Digite a opcao desejada: ");
        scanf("%i", &opcao);

        ////////////////////////////////////////////
        if (opcao == 1) {
            system("cls");
            printf("OPCAO 1");
            /////////////////////////////
            printf("\nSISTEMA DE ORÇAMENTO DE PISCINAS RETANGULARES");
            printf("\n\n\nDigite o nome do cliente: ");
            scanf("%s", nome);
            printf("Digite a largura desejada na piscina: ");
            scanf("%f", &largura);
            printf("Digite aqui o comprimento desejado na piscina: ");
            scanf("%f", &comprimento);
            printf("Digite aqui a profundidade desejada na piscina: ");
            scanf("%f", &profundidade);
            printf("Digite o preço do metro cúbico: ");
            scanf("%f", &preco);
            /////////////////////////////
            if (largura > 0 && comprimento > 0 && profundidade > 0) {
                metragem = comprimento * profundidade * largura;
                valorfinal = metragem * preco;

                printf("%s, para construir sua piscina o orçamento será de %.2f", nome, valorfinal);
                printf("\nTendo %.2f metros cúbicos", metragem);
            } else {
                printf("Digite um número válido!!");
            }

            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 2) {
            system("cls");
            printf("OPCAO 2");
            ////////////////////////////////////////////
            printf("\nSISTEMA DE ORÇAMENTO DE PISCINAS REDONDAS");
            printf("\n\n\nDigite o nome do cliente: ");
            scanf("%s", nome);
            printf("Digite aqui o valor do raio da piscina: ");
            scanf("%f", &raio);
            printf("Digite aqui a profundidade desejada na piscina: ");
            scanf("%f", &profundidade);
            printf("Digite o preço do metro cúbico: ");
            scanf("%f", &preco);
 
            if (raio > 0 && profundidade > 0 && preco > 0) {
                metragem = 3.14 * raio * raio * profundidade;  // Corrigido para usar ponto decimal
                valorfinal = metragem * preco;

                printf("%s, para construir sua piscina o orçamento será de %.2f", nome, valorfinal);
                printf("\nTendo %.2f metros cúbicos", metragem);
            } else {
                printf("Digite um número válido!!");
            }

            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 0) {
            system("cls");
            printf("Encerrando programa");
        } else {
            printf("\n\nOpção inválida!!");
            printf("\n\nDigite algo para continuar ");
            getch();
        }
    } // while

    return 0;
}
