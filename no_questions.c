#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char nome[25];
    int num;

    printf("QUAL FILME DA BARBIE VOCÊ É???!!!\n");
    printf("Qual o seu nome?\n");
    scanf("%s", nome);
    
    printf("Escolha um número de 1 a 10:\n");
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("Parabéns, %s, você é: Barbie e o lago dos cisnes!\n", nome);
            break;
        case 2:
            printf("Parabéns, %s, você é: Barbie escola de princesas!\n", nome);
            break;
        case 3:
            printf("Parabéns, %s, você é: Barbie e as três mosqueteiras!\n", nome);
            break;
        case 4:
            printf("Parabéns, %s, você é: Barbie princesa da ilha!\n", nome);
            break;
        case 5:
            printf("Parabéns, %s, você é: Barbie em vida de sereia!\n", nome);
            break;
        case 6:
            printf("Parabéns, %s, você é: Barbie, a polegarzinha!\n", nome);
            break;
        case 7:
            printf("Parabéns, %s, você é: Barbie moda e magia!\n", nome);
            break;
        case 8:
            printf("Parabéns, %s, você é: Barbie Rapunzel!\n", nome);
            break;
        case 9:
            printf("Parabéns, %s, você é: Barbie e as 12 princesas bailarinas!\n", nome);
            break;
        case 10:
            printf("Parabéns, %s, você é: Barbie e o castelo de diamante!\n", nome);
            break;
        default:
            printf("Valor inválido!!!!!\n");
    }

    return 0;
}
