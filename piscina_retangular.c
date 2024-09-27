#include <stdio.h>

int main() {
    float largura, comprimento, profundidade, metragem, preco, valorfinal;
    char nome[30];

    printf("SISTEMA DE ORÇAMENTO DE PISCINAS");
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

    if (largura > 0 && comprimento > 0 && profundidade > 0) {
        metragem = comprimento * profundidade * largura;
        valorfinal = metragem * preco;

        printf("%s, para construir sua piscina o orçamento será de %.2f", nome, valorfinal);
    } else {
        printf("Digite um número válido!!");
    }

    return 0;
}
