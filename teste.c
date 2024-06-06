/*
 * O meu primeiro projeto no git.
 */
#include <stdio.h>

int main()
{
	printf("O meu primeiro projeto no git\n");
	printf("A minha primeirissima alteração\n");

	printf("A minha quarta alteração\n");
	

    char resposta[10];

    printf("Estou passado? (sim/nao): ");
    scanf("%s", resposta);

    if (strcmp(resposta, "sim") == 0) {
        printf("Negócio fechado com sucesso\n");
    }
    else if (strcmp(resposta, "nao") == 0) {
        printf(":( Adeus\n");
    }
    else {
        printf("Resposta inválida.\n");
    }

    return 0
}