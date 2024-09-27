#include <stdio.h>

int main() {
    float raio, profundidade, metragem, valorfinal, preco;
    char nome[30];

    printf("SISTEMA DE ORÇAMENTO DE PISCINAS");
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
        printf("\n\nTendo %.2f metros cúbicos", metragem);
    } else {
        printf("Digite um número válido!!");
    }

    return 0;
}
