#include "max_dist.h"

int max_dist(int *tab, unsigned int n)
{
    int min = tab[0];
    int max = tab[0];
    unsigned int i = 1;
    while (i < n)
    {
        if (tab[i] < min)
            min = tab[i];
        if (tab[i] > max)
            max = tab[i];
        i++;
    }
    return max - min;
}