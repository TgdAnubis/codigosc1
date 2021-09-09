#include <stdio.h>
#include <stdlib.h>

int numero;
int contador=0;

int main(int argc, char *argv[])

{
    printf("tabuada\n\n");
        printf("digite um numero da tabuada: ");
        scanf("%d", &numero);
    // a linha a seguir gera um laço finito
    for(contador=0; contador<=15; contador++)
    {
        printf("%d x %d = %d\n", numero, contador, numero*contador);
    }
    system("pause");
    return 0;

}
