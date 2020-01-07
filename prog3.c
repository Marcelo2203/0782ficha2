#include <stdio.h>
void main(){

char moeda;
const float usd = 1.12;
float eur;
const float euro = 0.89;
const float cad = 0.69;
const float euroc = 1.45;
float ca;
float dollar;

printf("Qual a conversao desejada das seguintes \n[E] De USD para Euro \n[D] De Euro para USD \n[C] De Euro para CAD \n[F] De CAD para Euro\n");
scanf(" %s", &moeda);
switch (moeda)
{
case 'E':
printf("Escolheste a conversao de USD para Euro\n");
printf("Quantos dollars tens ");
scanf(" %f",&eur);
dollar = eur*euro;
printf("Isto dá aproximadamente %f euros",dollar);
    break;
    case 'D':
printf("Escolheste a conversao de Euro para USD\n");
printf("Quantos euros tens ");
scanf(" %f",&dollar);
eur = dollar*usd;
printf("Isto dá aproximadamente %f USD",eur);
    break;
        case 'C':
printf("Escolheste a conversao de Euro para CAD\n");
printf("Quantos euros tens ");
scanf(" %f",&eur);
ca = eur*cad;
printf("Isto dá aproximadamente %f CAD",ca);
    break;
            case 'F':
printf("Escolheste a conversao de CAD para Euro\n");
printf("Quantos CADS tens ");
scanf(" %f",&ca);
eur = ca*euroc;
printf("Isto dá aproximadamente %f Euros",eur);
    break;

default:
printf("Opção invalida,Obrigado!");
    break;
}







}