#include "max_dist.h"

int max_dist(int *tab, unsigned int n)
{
    int min = tab[0];
    int max = tab[0];
    unsigned int i = 1;
    /*@
        @ loop assigns i, min, max;

        @ loop invariant 1 <= i <= n;
        
        @ loop invariant \forall integer a,b; (1 <= a <= b < i) ==> (max - min) >= (abs(tab[a] - tab[b]));

        @ loop invariant \forall integer a; (1 <= a < i) ==> min <= tab[a] <= max;

        @ loop invariant \exists integer a; (1 <= a < i)  ==> (tab[a] == min);
        @ loop invariant \exists integer a; (1 <= a < i)  ==> (tab[a] == max);

        @ loop variant n - i;
    */
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