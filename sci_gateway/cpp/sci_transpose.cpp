#include "api_scilab.h"
#include "Scierror.h"
#include "localization.h"
#include "trans.h"
static const char fname[] = "transpose";

int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabVar* opt, int nout, scilabVar* out)
{
    int row = 0;
    int col = 0;
    int size;
    double* in1 = nullptr;
    double* out1 = nullptr;
   

if(nin > 1 || nin < 1)
{
    Scierror(77, _("%s: Wrong no of argument(s): %d expected.\n", fname,1));
    return 1;
}
if (scilab_isDouble(env,in[0]) == 0 || scilab_isMatrix2d(env, in[0]) == 0 || scilab_isComplex(env, in[0]) == 1))
{
    Scierror(999, _("%s: wrong type for input argument #%d: A scalar/Double value expected.\n", fname, 1));
     return 1;
}

size = scilab_getDim2d(env, in[0], &row, &col);

 double* ar =  new double[size];

scilab_getDoubleArray(env, in[0], &in1);

out[0] = scilab_createDoubleMatrix2d(env, col, row, 0);

scilab_getDoubleArray(env, out[0], &out1);

transpose(in1, ar, size);

for(int i = 0; i < size; i++)
out1[i] = ar[i];

return 0;

}