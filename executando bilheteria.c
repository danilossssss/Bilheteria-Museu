#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])

{





 printf("Seja bem vindo ao Museu!\n\n");
printf("Ingresso entrada inteira= R$10 reais\nMeia-entrada= R$5 reais\n\n");


int n1,n2,n3,n4,n5,n6,total;
   
    printf("\nDigite a quantidade de ingressos entrada inteira gostaria de comprar= ");
    scanf("%d", &n1);
   

    printf("Digite a quantidade de ingressos meia entrada gostaria de comprar= ");
    scanf("%d", &n2);
   
    total=n1+n2;
   
    printf("Total de ingressos= %d\n\n", total);
 
   
   n3=n1 * 10;
   printf("Valor total dos ingressos entrada inteira = R$ %d\n",n3);
   
   n4=n2 * 5;
   printf("Valor total dos ingressos meia entrada = R$ %d\n",n4);
   
   n5=n3+n4;
   printf("Valor total = R$ %d\n", n5);
   

 
   FILE *file;
    file = fopen ("dados de vendas.csv", "a");
    fprintf(file, "%d", n5);
    fprintf(file, "\n");
    fclose(file);
   
    if (file == NULL)
    {
        printf("arquivo não pode ser aberto");
    }
   
  printf("\nObrigado pela participacao!");
   
    return 0;
}
