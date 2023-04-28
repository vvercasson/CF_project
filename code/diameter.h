#include <limits.h>
#include "abs.h"

/*
    Le résultat doit être une valeur v telle que il existe i et j telle que v est t[i]-t[j], et que c’est le minimum pour l’ensemble des indices i des maximum pour les indices j des abs(t[i]-t[j]).

    Une précondition peu évidente à trouver vous est spécifiée (elle vient de l’utilisation de abs, et empêche de prouver un seul invariant, donc je préfère vous la donner).
    De même, la post-condition principale vous est donnée. Commencez par la démontrer, puis, comme dans les exercices précédents, observez que ce n’est pas suffisant et donnez et démontrez la post-condition manquante.
 */
/*@
    requires \forall integer i; 0 <= i < n ==> INT_MAX > tab[i] >= 0;ensures \forall integer l; 0 <= l < n ==> (\exists integer b; 0 <= b < n && \forall integer k; 0 <= k < n ==> abs(tab[l]-tab[b]) >= abs(tab[l] - tab[k]) && \result <= abs(tab[l]-tab[b]));

*/
int diameter(int *tab, unsigned int n);