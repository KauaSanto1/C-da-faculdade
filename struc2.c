#include <stdio.h>
#include <stdlib.h>

int main() {
    struct molde_func {
        char nome[30];
        int idade;
        float salario;
    };
    
    struct molde_func func[10];
    int n = 0;
    int i;
    int continuar = 1;
    FILE *arq;
    int prilin;
    int opcao = 1;

    while (opcao != 0) {
        system("cls");
        printf("     Menu Funcionarios");
        printf("\n 1 - Incluir funcionarios");
        printf("\n 2 - Mostrar a lista dos funcionarios");
        printf("\n 3 - Exportar para arquivo");
        printf("\n 0 - Sair");
        printf("\n\n Digite a opcao desejada: ");
        scanf("%i", &opcao);
        
        ////////////////////////////////////////////
        if (opcao == 1) {
            system("cls");
            printf("Incluir funcionarios\n");
            if (n < 10) {
                printf("Digite o nome: ");
                scanf("%s", func[n].nome);
                printf("Digite a idade: ");
                scanf("%i", &func[n].idade);
                printf("Digite o salario: ");
                scanf("%f", &func[n].salario);
                n++;
            } else {
                printf("\n Estrutura está cheia!");
                getch();
            }
        } else if (opcao == 2) {
            system("cls");
            printf("Mostrar a lista dos funcionarios");
            for (i = 0; i < n; i++) {
                printf("\n%s;%i;%.2f", func[i].nome, func[i].idade, func[i].salario);
            }
            printf("\n\n Digite algo para continuar ");
            getch();
        } else if (opcao == 3) {
            system("cls");
            printf("Exportar para arquivo\n");
            prilin = 0;
            arq = fopen("funcionario.txt", "w");
            for (i = 0; i < n; i++) {
                if (prilin == 0) {
                    fprintf(arq, "%s;%i;%.2f;", func[i].nome, func[i].idade, func[i].salario);
                    prilin = 1;
                } else {
                    fprintf(arq, "\n%s;%i;%.2f;", func[i].nome, func[i].idade, func[i].salario);
                }
            }
            fclose(arq);
            ////////////////////////////////////////////
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
    } // while
    return 0;
}
