#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

int transpose(double* input, double* output,int  n)
{
    for(int i = 0 ; i < n ; i++)
    {
        output[i] = input[i];
    }         
    return 0;
}
 