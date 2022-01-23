#include<stdio.h>

int main (){
    /*
    do {
        "codigo"
    } while (condicion);
    */

   int k = 10;

   do{
       printf("k vale %d\n",k);
       k++;
   } while (k<20)
   {
       printf("Fin");
   }
   

   return 0;
}