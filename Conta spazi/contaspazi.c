#include <stdio.h>

size_t conta_spazi(const char *s){

size_t count = 0;

    while (*s != '\0')
    {
        if (*s == ' ')
        {
            count++;
        }
        
        s++;
        
    }

    return count;

}