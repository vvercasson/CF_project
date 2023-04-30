#include <limits.h>
#include "abs.h"

/*@ 
    @ requires n > 0;
    @ requires \valid(tab + (0..n-1));
    @ assigns \nothing;
    @ ensures \forall integer i; 0 <= i < n ==> (\forall integer j; i < j < n ==> \result <= abs(tab[i]-tab[j]));
 */
int min_dist(int *tab, unsigned int n);