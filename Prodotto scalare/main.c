#include <stdio.h>
#include <stdlib.h>     //Libreria per rand e srand
#include <time.h>       //Libreria per la funzione time     
#include "vettori.h"
#define DIM 3           //Dimensione vettori con una macro

    int main(void){
        
        srand(time(NULL));  //Generazione di nuovi valori ad ogni esecuzione

        //Dichiarazione vettori che generano tre valori casuali da 0 a 50
        const double a[DIM] = {rand() % 51, rand() % 51, rand() % 51};
        const double b[DIM] = {rand() % 51, rand() % 51, rand() % 51};
        
        //Stampa valori del primo vettore
        for (size_t i = 0; i < DIM; i++)
        {
            printf("X(%ld) = %.2lf\t", i + 1, a[i]);
        }
        
        printf("\n");

        //Stampa valori del secondo vettore
        for (size_t i = 0; i < DIM; i++)
        {
            printf("Y(%ld) = %.2lf\t", i + 1, + b[i]);
        }

        printf("\n");
        
        
        //Chiamata funzione
        double prod_scalare = prodotto_scalare(a, b);
        
        //Stampa prodotto scalare
        printf("Il prodotto scalare dei due vettori e': %.2lf\n", prod_scalare);

        return 0;
        
    }