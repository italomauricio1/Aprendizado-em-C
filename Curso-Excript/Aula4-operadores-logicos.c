#include <stdio.h>
#include <stdlib.h>


int main(){
    /*
    int i;
   
    printf("Digite um numero: ");
    scanf("%i", &i);

    if (i >= 5 && i <= 10){

        printf("Entre 5 e 10");
    }else{

        printf("Abaixo de 5 ou maior que 10");
    }
    
    return 0;

    */

   int i = 10;

   printf("Digite um número != 5: \n");
   scanf("%i", &i);

   if (i != 5){
        printf("\nA expressão eh:\n");
        printf("TRUE\n");

   }else{
        printf("\nA expressão eh:\n");  
        printf("FALSE\n");    
   }


   return 0;

   /*
   
   1) positivo -> 1
   2) negativo -> 0
   3) comparação negativa !=
   4) comparação positiva ==
   5) ! é um sinal de negação, igual a expressão NOT
   
   */


}

