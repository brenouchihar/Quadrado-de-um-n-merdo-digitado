#include<stdio.h>

int main (){

int num, resultado;
resultado = 0;

printf("Digite um numero");
scanf("%d", & num);

for(int i = 0; i<num; i++)
{
  resultado = resultado + 2*i +1;
}
  printf("O quadrado de %d e %d", num, resultado);
}