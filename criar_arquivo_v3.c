#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char livro[30], linha[80];
    int isbn, op = 1;
    float valor;
    int opcao = 1;

    while (opcao != 0) {
        system("cls");
        printf("     MENU");
        printf("\n 1 - Escrever");
        printf("\n 2 - Ler");
        printf("\n 0 - SAIR");
        printf("\n\n Digite a opcao desejada: ");
        scanf("%i", &opcao);
        
        if (opcao == 1) {
            system("cls");
            printf("Escrever\n");
            arq = fopen("livrolist.txt", "w");

            if (arq == NULL) {
                perror("Erro ao abrir o arquivo");
                continue;
            }

            while (op != 0) {
                fflush(stdin);
                printf("Digite o nome do livro: ");
                scanf("%[^\n]s", livro);
                printf("Digite o isbn: ");
                scanf("%i", &isbn);
                printf("Digite o seu valor: ");
                scanf("%f", &valor);

                fprintf(arq, "%s;%i;%.2f", livro, isbn, valor);
                printf("Continuar? 1-sim / 0-não: ");
                scanf("%i", &op);

                if (op == 1) {
                    fprintf(arq, "\n");
                }
            }
            fclose(arq);
            printf("\n\n Digite algo para continuar ");
            getch();

        } else if (opcao == 2) {
            system("cls");
            printf("Ler\n");
            arq = fopen("livrolist.txt", "r");

            if (arq != NULL) {
                while (!feof(arq)) {
                    fscanf(arq, "%[^;];%i;%f\n", livro, &isbn, &valor);
                    printf("\n Nome: %s", livro);
                    printf("\n Isbn: %i", isbn);
                    printf("\n Valor: %.2f", valor);
                    printf("\n ------------------------------ \n");
                }
                fclose(arq);
            } else {
                printf("O arquivo não existe");
            }
            printf("\n\n Digite algo para continuar ");
            getch();

        } else if (opcao == 0) {
            system("cls");
            printf("Encerrando programa");
        } else {
            printf("\n\n Opcao invalida!!");
            printf("\n\n Digite algo para continuar ");
            getch();
        }
    }

    return 0;
}
