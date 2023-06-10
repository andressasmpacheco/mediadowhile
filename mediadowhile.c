#include <stdio.h>
main ()
{

int a, n=0, i;
float soma, media;

printf("Quantos numeros voce quer: ");
scanf("%d",&n);

do
{
    printf("Escreva a nota: ");
    scanf("%d", &a);
    soma = soma + a;
} while (a!=0 );

media = soma/n;

printf("Media = %f \n", media);

}
