#include <stdio.h>
#include <stdlib.h>

int main() {
    float saldo = 1000;
    float saque;
    float deposito;
    int escolha;



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
  }
}
return 0;
}







