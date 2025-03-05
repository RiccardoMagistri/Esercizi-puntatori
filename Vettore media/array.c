#include <stdio.h>

double array_init(double *ar, double dim){
    for (size_t i = 0; i < dim; i++)
        {
            printf("Inserisci i valori dell'array\n");
            scanf("%lf", &ar[i]);
        }
}


double media(double *arr, size_t n){

    double somma = 0;
    double media_ar = 0;

        for (size_t i = 0; i < n; i++)
        {         
            somma += arr[i];
        }

        media_ar = somma / n;
        
        return media_ar;
        
        
}
