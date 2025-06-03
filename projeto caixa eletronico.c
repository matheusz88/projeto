#include <stdio.h>
#include <stdlib.h>

int main(){
int opcao;

float saldo = 1000;
float saque;
float deposito;
float valor;
float saida;

while (opcao !=4){
printf("caixa eletronico:\n");


printf(" bem vindo ao caixa eletronico\n \n");

printf("digite a operacao desejada:  (1) consultar saldo, (2)saque, (3)deposito, (4)sair: ");
    scanf("%i", &opcao);

    switch (opcao){



    case 1:
        printf ("saldo:%f", saldo);
    break;

    case 2:
        printf("digite o valor do saque: ");
        scanf("%f", &saque);

        if(saque > saldo){
         printf("voce nao possui saldo");
        }
        else  {

            saldo = saldo - saque;
            printf("saldo restante: %f\n",saldo);

            printf("saque realizado com sucesso");

            }
            break;
        case 3:
            printf("Opcao Deposito selecionada.\n");
            printf("Digite o valor a depositar: ");
            scanf("%f", &valor);
            saldo += valor;
            printf("Saldo atual: %f", saldo);
            break;



        case 4:
            printf("sair\n");
            printf("obrigado(a) por utilizar o caixa eletronico");


}

    }
return 0;

}





