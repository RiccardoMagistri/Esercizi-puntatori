#include <stdio.h>
#include "array.h"
#define N 5

    int main(void){
        double array[N] = {0};
        double arr_init;
        double media_arr;

            arr_init = array_init(array, N);
            media_arr = media(array, N);
            printf("La media dell'array e': %.2lf", media_arr);
 
    }