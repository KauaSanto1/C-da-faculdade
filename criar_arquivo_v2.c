#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    char nome[30], linha[80];
    int idade, op = 1;
    float salario;
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
            printf("Escrever");
            arq = fopen("listaemp.txt", "w");

            if (arq == NULL) {
                perror("Erro ao abrir o arquivo");
                continue;
            }

            while (op != 0) {
                printf("Digite o nome: ");
                scanf("%s", nome);
                printf("Digite a idade: ");
                scanf("%i", &idade);
                printf("Digite o seu salário: ");
                scanf("%f", &salario);

                fprintf(arq, "%s;%i;%.2f", nome, idade, salario);
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
            printf("Ler");
            arq = fopen("listaemp.txt", "r");

            if (arq != NULL) {
                while (fscanf(arq, "%[^;];%i;%f\n", nome, &idade, &salario) == 3) {
                    printf("\n Nome: %s", nome);
                    printf("\n Idade: %i", idade);
                    printf("\n Salario: %.2f", salario);
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
