/*This transpose function changed fas compared to my general 
transpose function from the Part-A.
since, in scilab libary the input scivar stores 2d matrix/array 
as a whole singe dimensional array*/


/*Part-A for transpose function was like this#
include <stdio.h>
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
*/
#include <stdio.h>
#include <stdlib.h>
#include "trans.h"


int main(void)
{
  double ar[3]= {1, 2, 3}; //input matrix
	double an[3];   //output matrix
	transpose(ar, an, 3);
   for (int i = 0; i < 3; ++i) {
      printf("%0.0lf\t", an[i]);
    }
  
  return 0;
}
