#include <stdio.h>
#include <stdlib.h>


int main (){
    float saldo = 1000 ;
    float saque;
    float deposito;
    int escolha;
    int senha = 1234;
    int senhaUsuario;


        printf("==========================================\n");

        printf ("     Caixa Eletronico - Hora:16:25\n"       );

        printf("==========================================\n");

        system ("color 7D");

        printf ("Digite a senha:\n\n ");
        scanf ("%i",&senhaUsuario);

    if (senha == senhaUsuario){
        printf ("senha Correta\n\n");

        while (escolha !=4) {

        printf ("Digite a operacao desejada:\n (1) Consultar saldo\n (2) Saque\n (3)deposito\n (4) Sair\n");
        scanf ("%i", &escolha);


        switch (escolha) {
                case 1:
                printf("Saldo: %f" , saldo);
                break;

                case 2:
                printf ("Digite o valor do Saque: ");
                scanf ("%f", &saque);


               if (saque > saldo){
                printf ("Seu Saldo eh insuficiente");
               }

               else {
                saldo = saldo - saque;
                printf ("Saldo restante: %f \n", saldo);
                printf ("Saque realizado com sucesso");
               }
                break;

                case 3:
                printf ("Digite o valor do deposito:\n");
                scanf ("%f",&deposito);
                saldo += deposito;
                printf ("Deposito realizado com sucesso,%f \n", saldo);
                break;


                case 4:
                printf ("Sair\n");

                printf ("Obrigada por utilizar o caixa eletronico");

                default:
                    printf ("Numero invalido\n");

                }

     }


    }
                else  {
                printf  ("senha incorreta\n");
    }


    return 0;

}
