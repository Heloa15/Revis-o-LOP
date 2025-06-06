#include <stdio.h>

typedef struct {
    char nome[30];
    int idade;
    float imc;
}Aluno;


void classificarAluno( Aluno a) {
    printf("\nAluno: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("IMC: %.2f\n", a.imc);

    if (a.imc > 30.0) {
        printf("Classificação: Obeso\n");
    } else if (a.imc >= 25.0) {
        printf("Classificação: Sobrepeso\n");
    } else {
        printf("Classificação: Saudável\n");
    }
}

int main() {
     Aluno aluno;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", aluno.nome);
    printf("Digite a idade: ");
    scanf("%d", &aluno.idade);
    printf("Digite o IMC: ");
    scanf("%f", &aluno.imc);
    
    classificarAluno(aluno);

    return 0;
}
