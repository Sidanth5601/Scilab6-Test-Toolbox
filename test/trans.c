#include <stdio.h>
#include <stdlib.h>
#include "trans.h"

//n -- rows, m -- columns
int transpose(double answ[3][2], double arr[2][3],int  n,int  m)
{
    int i ,j ;
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++)
           *(*(answ + j) + i) = *(*(arr + i) + j) ;
          //  j[answ][i] = i[arr][j];
     return 0;       
}
 