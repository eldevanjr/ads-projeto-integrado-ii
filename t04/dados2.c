#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX_NOME 30
#define TAM_MAX_ENDER 50
#define TAM_MAX_TEL 14

/**
 * @brief
 * Faça um programa na linguagem C,
 * utilizando qualquer compilador, em que peça como entrada, seu
 * nome, endereço e telefone,
 * por fim, exiba esses dados na tela.
 *
 */
int main(int argC, char *argV[])
{
    /* Aloca memória e verifica se está ok! */
    char *nome = malloc(TAM_MAX_NOME);
    char *endereco = malloc(TAM_MAX_ENDER);
    char *telefone = malloc(TAM_MAX_TEL);

    if (nome == NULL || endereco == NULL || telefone == NULL)
    {
        printf("No memory\n");
        return 1;
    }

    /* Pergunta pelo nome do usuário. */
    printf("Qual o seu Nome? ");

    /* Atribui o valor de nome com a definição máx de tamanho. */
    fgets(nome, TAM_MAX_NOME, stdin);

    printf("Qual o seu Endereço? ");

    /* Atribui o valor de endereco com a definição máx de tamanho. */
    fgets(endereco, TAM_MAX_ENDER, stdin);

    printf("Qual o seu Telefone? ");

    /* Atribui o valor de telefone com a definição máx de tamanho. */
    fgets(telefone, TAM_MAX_TEL, stdin);

    /* Remove quebra de linhas, se houver.*/
    if ((strlen(nome) > 0) && (nome[strlen(nome) - 1] == '\n'))
        nome[strlen(nome) - 1] = '\0';

    if ((strlen(endereco) > 0) && (endereco[strlen(endereco) - 1] == '\n'))
        endereco[strlen(endereco) - 1] = '\0';

    if ((strlen(telefone) > 0) && (telefone[strlen(telefone) - 1] == '\n'))
        telefone[strlen(telefone) - 1] = '\0';

    /* Imprime os dados inseridos pelo usuário. */
    printf("Olá %s. Prazer em conhecê-lo.\n", nome);
    printf("Endereço: %s \n", endereco);
    printf("Telefone: %s \n", telefone);

    /* Limpa a memória e encerra o programa */
    free(nome);
    free(endereco);
    free(telefone);
    return 0;
}
