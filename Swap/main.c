#include <stdio.h>
#include "swap.h"

int a = 4;
int b = 5;

    int main(void){
         
        //Stampo i valori prima di scambiarli
        printf("Prima swap -> a = %d\tb = %d\n", a, b);\
        
        //Richiamo swap (swap1 funzionante)
        swap();
        printf("Dopo swap1 funzionante -> a = %d\tb = %d\n" , a, b);

        //Richiamo la funzione swap1
        swap1(a, b);
        printf("Dopo swap1 -> a = %d\tb = %d\n", a, b);

        //Richiamo la funzione swap2
        swap2(&a, &b);
        printf("Dopo swap2 -> a = %d\tb = %d\n", a, b);

        return 0;
    }

