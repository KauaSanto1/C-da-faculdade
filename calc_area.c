#include <stdio.h>
#include <stdlib.h>  // Para system()
#include <conio.h>  // Para getch()

float calc_retangulo(float comp, float larg) {
    float area;
    if (comp > 0) {
        if (larg > 0) {
            area = comp * larg;
        } else {
            area = -998;  // Largura inválida
        }
    } else {
        area = -999;  // Comprimento inválido
    }
    return area;
}

float area_quadrado(float lado1) {
    float area;
    if (lado1 > 0) {
        area = lado1 * lado1;
    } else {
        area = -999;  // Lado inválido
    }
    return area;
}

float calc_triangulo(float base, float altura) {
    float area;
    if (base > 0) {
        if (altura > 0) {
            area = (base * altura) / 2;
        } else {
            area = -998;  // Altura inválida
        }
    } else {
        area = -999;  // Base inválida
    }
    return area;
}

float calc_circ(float raio) {
    float area;
    if (raio > 0) {
        area = 3.14 * (raio * raio);
    } else {
        area = -998;  // Raio inválido
    }
    return area;
}

int main() {
    float b, h, area1, lado, area, raio1, larg, comp;
    int opcao = 1;

    while (opcao != 0) {
        system("cls");
        printf("     MENU");
        printf("\n 1 - AREA QUADRADO");
        printf("\n 2 - AREA RETANGULO");
        printf("\n 3 - AREA TRIANGULO");
        printf("\n 4 - AREA CIRCULO");
        printf("\n 0 - SAIR");
        printf("\n\n Digite a opcao desejada: ");
        scanf("%i", &opcao);

        ////////////////////////////////////////////
        if (opcao == 1) {
            system("cls");
            printf("QUADRADO");
            printf("\nCalculo area do quadrado");
            printf("\nDigite o valor do lado: ");
            scanf("%f", &lado);
            area1 = area_quadrado(lado);
            printf("O resultado sera: %.2f", area1);
            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 2) {
            system("cls");
            printf("RETANGULO");
            printf("\nCalculo da area do retangulo");
            printf("\nDigite o valor do comprimento: ");
            scanf("%f", &comp);
            printf("Digite o valor da largura: ");
            scanf("%f", &larg);
            area = calc_retangulo(comp, larg);
            printf("O resultado sera: %.2f", area);
            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 3) {
            system("cls");
            printf("TRIANGULO");
            printf("\nCalculo da area do triangulo");
            printf("\nDigite o valor da base: ");
            scanf("%f", &b);
            printf("Digite o valor da altura: ");
            scanf("%f", &h);
            area = calc_triangulo(b, h);
            printf("O resultado sera: %.2f", area);
            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 4) {
            system("cls");
            printf("CIRCULO");
            printf("\nCalculo da area do circulo");
            printf("\nDigite o valor do raio: ");
            scanf("%f", &raio1);
            area = calc_circ(raio1);
            printf("O resultado sera: %.2f", area);
            printf("\n\nDigite algo para continuar ");
            getch();
        } else if (opcao == 0) {
            system("cls");
            printf("Encerrando programa");
        } else {
            printf("\n\nOpcao invalida!!");
            printf("\n\nDigite algo para continuar ");
            getch();
        }
    } // while

    return 0;
}
