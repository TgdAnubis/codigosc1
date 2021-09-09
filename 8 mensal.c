#include <stdio.h>

 int main()

{ 
    float salario, agua, cartao, combustivel, desmaisdespesas, total ;
    printf("salario: ");
    scanf("%f", &salario);
    printf("\n");
    printf("valor da agua: ");
    scanf("%f", &agua);
    printf("\n");
    printf("valor cartao: ");
    scanf("%f", &cartao);
    printf("\n");
    printf("valor do combustivel: ");
    scanf("%f", &combustivel);
    printf("\n");
    printf("valor demais despesas: ");
    scanf("%f", &desmaisdespesas);

   total = (salario - (agua + cartao + combustivel + desmaisdespesas) );
    printf("%.2f", total);

    return 0;
}
