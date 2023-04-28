#include "abs.h"

int abs(int n)
{
    int res = n;
    if (n < 0)
        res = -n;
    return res;
}

int abs2(int n)
{
    int aux = n % 2 + (n + 1) % 2;
    return n * aux;
}