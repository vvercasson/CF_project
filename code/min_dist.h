#include <limits.h>
#include "abs-cor.h"

/*@ ensures \forall integer i; 0 <= i < n ==> (\forall integer j; i < j < n ==> \result <= abs(tab[i]-tab[j]));
 */
int min_dist(int *tab, unsigned int n);