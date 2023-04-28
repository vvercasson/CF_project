#include <limits.h>
#include "abs.h"

/*@ ensures \forall integer a,b; 0 <= a < b < n ==> \result >= abs(tab[a]-tab[b]);
 */
int max_dist(int *tab, unsigned int n);