#ifndef __FORMALISM__
#define __FORMALISM__

#include <limits.h>

/*@ logic integer abs(integer n) = 0<n?n:-n;*/

/*@ terminates \true;
    ensures \result == abs(n);
 */
int abs(int n);

/*@ terminates \true;
    ensures \result == abs(n);*/
int abs2(int n);

#endif