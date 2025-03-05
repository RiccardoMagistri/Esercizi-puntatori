#include <stdio.h>
#include "contaspazi.h"

    int main(void){

        const char string[] = "Ciao sono Riccardo Magistri";
        size_t conta_spazi_string;

            conta_spazi_string = conta_spazi(string);
            printf("Stringa: %s\n", string);
            printf("Gli spazi sono: %ld\n", conta_spazi_string);
        
            return 0;
    }