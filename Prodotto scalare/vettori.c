#include <stdio.h>  //Libreria per size_t

//Definizione funzione prodotto scalare
double prodotto_scalare(const double *x, const double *y){
    
    //Formula
    double prod_scal = (x[0] * y[0]) + (x[1] * y[1]) + (x[2] * y[2]);

    //Ritorno variabile
    return prod_scal;
}
