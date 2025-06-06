#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[30], tipo[30];
    int idade;
} Animal;

Animal animais[6];
int totalAnimais = 0;

void cadastrarAnimal();
void listarAnimais();

int main() {
    int opcao;

    do {
        printf("----- Pet Shop Amigo Fiel -----\n");
        printf("Escolha uma opção:\n");
        printf("1 - Cadastrar Pet\n");
        printf("2 - Listar Animais com mais de 5 anos de idade\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrarAnimal();
                break;
            case 2:
                listarAnimais();
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção Inválida! Tente Novamente!\n");
        }
    } while(opcao != 0);

    return 0;
}

void cadastrarAnimal() {
    if(totalAnimais >= 6) {
        printf("Limite de animais cadastrados atingido!\n");
        return;
    }

    printf("--- CADASTRAR ANIMAL ---\n");
    printf("Nome: ");
    scanf("%s", animais[totalAnimais].nome);
    printf("Tipo: ");
    scanf("%s", animais[totalAnimais].tipo);
    printf("Idade: ");
    scanf("%d", &animais[totalAnimais].idade);

    totalAnimais++;
    printf("Animal cadastrado com sucesso!\n\n");
}

void listarAnimais() {
    printf("--- LISTANDO ANIMAIS COM MAIS DE 5 ANOS ---\n");
    int encontrou = 0;
    for(int i = 0; i < totalAnimais; i++) {
        if(animais[i].idade > 5) {
            printf("Nome: %s, Tipo: %s, Idade: %d\n", animais[i].nome, animais[i].tipo, animais[i].idade);
            encontrou = 1;
        }
    }
    if(!encontrou) {
        printf("Nenhum animal com mais de 5 anos foi encontrado.\n");
    }
    printf("\n");
}
