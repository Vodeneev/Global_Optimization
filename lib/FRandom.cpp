#include "FRandom.h"

FRandom :: FRandom()
{
    srand(time(0));
    for (int i = 0; i < HH_COUNT; i++)
    {
        double r = ((rand() % 10) - 5) / 2.5;
        A[i] = -1.1 + 2.0 * r;
        B[i] = -1.1 + 2.0 * r;
    }
}

double FRandom :: GetFuncValue(double x)
{
    double res;
    int i;
    res = A[0];
    for (i = 1; i < HH_COUNT; i++)
    {
        res += A[i] * sin(i * 2 * PI * x) + B[i] * cos(i * 2 * PI * x);
    }
    return res;
}

double FRandom:: leftBorder() {
    return 0.0;
}

double FRandom::rigthBorder()
{
    return 1.0;
}

double function(double y1, double y2)
{
    return y1 * y2;
}