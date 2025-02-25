#include <stdio.h>
#include "array.h"
#define N 5

int  i;

    int main(void){
        
        double arr[N] = {1.0, 2.0, 3.0, 4.0, 5.0};
        size_t pn = N;

        for (i = 0; i < N; i++)
        {
            printf("%.1lf\t", arr[i]);
        }

        printf("\n");

        while (1)
        {   
            size_t pos;
            printf("Inserisci la posizione da eliminare\n");
            scanf("%ld", &pos);
            array_remove(arr, &pn, pos);

            for (i = 0; i < pn; i++)
            {
                printf("%.1lf\t", arr[i]);
            }

            printf("\n");    
            
        }
        

        return 0;  
    }