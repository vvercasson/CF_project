#include <limits.h>
#include "abs.h"

/*@ 
    @ requires \valid(tab+(0..n-1));
    @ requires n >= 1;
    @ terminates \true;
    @ assigns \nothing;
    @ ensures \result >= 0;
    @ ensures \forall integer a,b; 0 <= a < b < n ==> \result >= abs(tab[a]-tab[b]);
 */
int max_dist(int *tab, unsigned int n);