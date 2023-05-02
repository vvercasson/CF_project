#include "min_dist.h"
int min_dist(int *tab, unsigned int n)
{
    int min = abs(tab[0] - tab[1]);
    unsigned int i = 0;
    /*@
        @ loop assigns i, min, j, min_i;
        @ loop invariant 0 <= i <= n - 1;
        @ loop variant (n - 1)-i;
    */
    while (i < n - 1)
    {
        int min_i = abs(tab[i] - tab[i + 1]);
        unsigned int j = i + 2;
        /*@
            @ loop assigns d, min_i, j;
            @ loop invariant i + 2 <= j <= n;
            @ loop variant n - j;
        */
        while (j < n)
        {
            int d = abs(tab[i] - tab[j]);
            if (d < min_i)
                min_i = d;
            j++;
        }
        if (min_i < min)
            min = min_i;
        i++;
    }
    return min;
}