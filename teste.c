/*
 * O meu primeiro projeto no git.
 */
#include <stdio.h>

int main()
{
	printf("O meu primeiro projeto no git\n");
	printf("A minha primeirissima altera��o\n");

	printf("A minha quarta altera��o\n");
	

    char resposta[10];

    printf("Estou passado? (sim/nao): ");
    scanf("%s", resposta);

    if (strcmp(resposta, "sim") == 0) {
        printf("Neg�cio fechado com sucesso\n");
    }
    else if (strcmp(resposta, "nao") == 0) {
        printf(":( Adeus\n");
    }
    else {
        printf("Resposta inv�lida.\n");
    }

    return 0
}