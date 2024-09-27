#include <stdio.h>
#include <stdlib.h>  // Para system()
#include <conio.h>  // Para getch()

int main() {
    int opcao = 1;

    while (opcao != 0) {
        system("cls");
        printf("     MENU");
        printf("\n 1 - OPCAO 1");
        printf("\n 2 - OPCAO 2");
        printf("\n 0 - SAIR");
        printf("\n\n Digite a opcao desejada: ");
        scanf("%i", &opcao);
        
        ////////////////////////////////////////////
        if (opcao == 1) {
            system("cls");
            printf("OPCAO 1");
            printf("\n\n Digite algo para continuar ");
            getch();
        } else if (opcao == 2) {
            system("cls");
            printf("OPCAO 2");
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
