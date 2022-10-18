#include <stdio.h>
int main()
{
    float valortotal, valordesconto, valorparcela, comissaocomdesconto, comissaosemdesconto;
    printf("Escreva o total da venda: R$");
    scanf("%f", &valortotal);

    printf("Total com 10 por cento de desconto: R$ %.2f\n", valordesconto=valortotal*0.9);
   
    printf("Valor da parcela 3 por cento sem juros: R$ %.2f\n", valorparcela=valortotal*0.03);

    printf("Comissao do vendendor a vista: R$ %.2f\n", comissaocomdesconto=valordesconto*0.05);

    printf("Comissao do vendendor sem desconto: R$ %.2f\n", comissaosemdesconto=valortotal*0.05);

    return 0;
}