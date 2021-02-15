#include <stdio.h>
#include <stdlib.h>
#include "trans.h"
const int r = 2;
const int c = 3;

int main(void)
{
  double ar[2][3] = { {1, 2, 3}, {4, 5, 6} }; //input matrix
	double an[3][2];   //output matrix
	transpose(an, ar, r, c);
   for (int i = 0; i < c; ++i) {
    for (int j = 0; j < r; ++j) {
      printf("%0.0lf\t", an[i][j]);
    }
    printf("\n");
  }
  return 0;
}
