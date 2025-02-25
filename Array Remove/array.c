#include <stdio.h>

void array_remove(double *arr, size_t *pn, size_t pos){
    if (pos >= *pn)
    {
        return;
    }

    if (*pn == 1)
    {
        return;
    }

    for (int i = pos - 1; i < *pn; i++)
    {
        arr[i] = arr[i + 1];
    }
    
    (*pn)--;
    
}
