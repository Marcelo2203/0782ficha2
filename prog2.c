#include <stdio.h>

void main(){

int x;
int y;
int soma;

printf("Qual o valor de x ");
scanf(" %d",&x);
printf("Qual o valor de y ");
scanf(" %d",&y);
soma = x+y;
printf("A soma dos dois numeros da %d \n",soma);

if (x < y)
{
printf("O y é o maior numero com o numero %d\n",y);
}
else if (y < x)
{
printf("O x é o maior numero %d\n",x);
}
else if (y = x)
{
printf("Ambos valores de X e Y são iguais ");
}







}