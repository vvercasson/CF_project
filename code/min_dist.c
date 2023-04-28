#include "min_dist.h"
int min_dist(int *tab, unsigned int n)
{
    int min = abs(tab[0] - tab[1]);
    unsigned int i = 0;
    while (i < n - 1)
    {
        int min_i = abs(tab[i] - tab[i + 1]);
        unsigned int j = i + 2;
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