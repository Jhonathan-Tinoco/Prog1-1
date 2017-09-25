/****************************************************
* Trab 2 : Numeros Primos
* Nome e Matricula:Vitor de Souza Luiz
* Professor: Alex Salgado
*****************************************************/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
   int num;
   int i;
   int op;
do {
           int pri = 0;


    printf("\nOla meu nome eh Vitor de souza e vou calcular numeros primos\n");

   do{
    printf("\nEntre com um numero positivo:");
    scanf("%d", &num);
}   while (num<=0);

for (i= 1; i <= num; i++){
        if (num % i == 0)
{
    pri++;
}

}

if (pri==2)
 printf("Esse numero eh primo");

 else
 printf("Esse numero nao eh primo\n");


printf("\nDeseja Continuar? 1 - Sim  2 - Nao:");
scanf("%d", &op);}while (op==1);

printf("\nObrigado ateh a proxima! Para ver meu código entre no link");



system("pause");
return 0;
}
