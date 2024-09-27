#include <stdio.h>

int main() {
    char nome[30];
    float salario, salario2, inss;
    int cont = 1;

    while (cont != 0) {
        // Entrada de dados
        printf("Digite aqui seu nome: ");
        scanf("%s", nome);
        printf("Digite aqui seu salario: ");
        scanf("%f", &salario);

        // Verificação do salário
        if (salario <= 0) {
            printf("Digite um salario valido!\n");
        } else if (salario <= 1045.00) {
            inss = salario * 0.075;
            salario2 = salario - inss;
            printf("%s, seu salario sera %.2f, sendo que foi descontado %.2f pelo INSS\n", nome, salario2, inss);
        } else if (salario <= 2089.60) {
            inss = salario * 0.09;
            salario2 = salario - inss;
            printf("%s, seu salario sera %.2f, sendo que foi descontado %.2f pelo INSS\n", nome, salario2, inss);
        } else if (salario <= 3134.40) {
            inss = salario * 0.12;
            salario2 = salario - inss;
            printf("%s, seu salario sera %.2f, sendo que foi descontado %.2f pelo INSS\n", nome, salario2, inss);
        } else if (salario < 6101.06) {
            inss = salario * 0.14;
            salario2 = salario - inss;
            printf("%s, seu salario sera %.2f, sendo que foi descontado %.2f pelo INSS\n", nome, salario2, inss);
        } else {
            inss = 845.15;
            salario2 = salario - inss;
            printf("%s, seu salario sera %.2f, sendo que foi descontado %.2f pelo INSS\n", nome, salario2, inss);
        }

        printf("\nGostaria de colocar os dados de um novo funcionario? SIM - 1 / NAO - 0: ");
        scanf("%i", &cont);
    }

    return 0;
}
