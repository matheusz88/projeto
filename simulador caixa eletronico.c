#include <stdio.h>
#include <stdlib.h>

int main() {
    int senha = 1234;
    int senhausuario;
    float saldo = 1000;
    float saque;
    float deposito;
    int escolha;

printf ("digite a senha\n");
    scanf ("%i", &senhausuario);

    if ( senha == senhausuario) {
        printf ("senha correta\n");
        while (escolha != 4){
    printf("Caixa eletronico:\n");

    printf("Digite a operacao desejada:\n (1)Consulta saldo\n (2)saque\n (3)depósito\n (4)sair:  ");
        scanf ("%i", &escolha);
  switch (escolha) {
        case 1:
            saldo = 1.000;
            printf ("saldo = 1.000: %i", saldo);
            break;
        case 2:
            printf("Digite o valor do saque:  ");

            scanf("%f", &saque);

            if (saque > saldo){
            printf("Voce nao possui saldo");

            }
            else   {
                saldo = saldo - saque;
                printf("saldo restante: %f\n",saldo);

                printf("Saque realizado com sucesso");
            }
            break;

            case 3:
            printf("Digite o valor do deposito: \n");

            scanf("%f", &deposito);
            saldo += deposito;
            printf (" saldo atual, %f\n",saldo);


case 4:
            printf("Digite sair: \n");
            printf ("Obrigado por utilizar o caixa eletronico");

            default:
            printf ("numero invalido\n");
  }
}
    }
    else {
        printf ("senha incorreta\n");
    }


return 0;
}
