#include <stdio.h>
#include <stdlib.h>
int main(void)
{
FILE *arq;
char nome [30];
int idade;
float salario;
int continuar =1;
arq = fopen("funcionario.csv","r");
if(arq == NULL){
arq = fopen("funcionario.csv","w");
fprintf (arq, "nome;idade;salario\n");
}else{
fclose(arq);
arq = fopen("funcionario.csv","a");
}
while(continuar != 0){
system("cls");
printf("Digite o nome: ");
scanf("%s", &nome);
printf("Digite a idade: ");
scanf("%i", &idade);
printf("Digite o salario: ");
scanf("%f", &salario);
 
    printf("Continuar? (0-sair / 1-continuar) ");
    scanf("%i", &continuar);
    fprintf(arq, "%s;%i;%.2f;\n", nome, idade, salario);
}
  fclose(arq);
  return 0;
 
}

