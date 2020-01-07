#include <stdio.h>

void main(){

char conversao;
const float libra = 2.2;
float quilos;
float libras;
printf("Qual a conversao desejada ");
scanf(" %s", &conversao);

switch (conversao)
{
case 'E':

printf("Escolheu a conversao de kilos para libras\n");
printf("Quantos quilos tem ");
scanf(" %f",&quilos);
libras = libra*quilos;
printf("Tens cerca de %f libras",libras);
    break;
    case 'L':

printf("Escolheu a conversao de libras para quilos\n");
printf("Quantos libras tem ");
scanf(" %f",&libras);
quilos = libras/libra;
printf("Tens cerca de %f quilos",quilos);
    break;

default:
printf("Desculpe mas nao temos essa conversao\n");
    break;
}







}