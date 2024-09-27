#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arq;
    int num;
    struct molde_aluno {
        char nome[30];
        int codigo;
        float nota;
    };
    
    struct molde_aluno aluno[5];
    int i;
    
    for (i = 0; i < 5; i++) {
        num = i + 1;
        printf("indice: %i\n", num);
        printf("Digite o nome do aluno: ");
        scanf("%s", aluno[i].nome);
        printf("Digite o codigo do aluno: ");
        scanf("%i", &aluno[i].codigo);
        printf("Digite a nota do aluno: ");
        scanf("%f", &aluno[i].nota);
        system("cls");
    }

    arq = fopen("struc.txt", "w");
    
    for (i = 0; i < 5; i++) {
        num = i + 1;
        printf("indice: %i\n", num);
        printf("O nome do aluno: %s\n", aluno[i].nome);
        printf("Seu codigo: %i\n", aluno[i].codigo);
        printf("Sua nota: %.2f\n", aluno[i].nota);
        fprintf(arq, "%s;%i;%.2f\n", aluno[i].nome, aluno[i].codigo, aluno[i].nota);
    }
    
    fclose(arq);
    return 0;
}
