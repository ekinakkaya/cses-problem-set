/* https://cses.fi/problemset/task/1069 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    unsigned long int rcount = 0;
    unsigned long int rcmax = 0;
    char c, t;

    while (c != '\n') {
        scanf("%c", &c);

        if (t != c) {
            /* set rcmax if smaller then the current repetition (rcount)*/
            if (rcmax < rcount) rcmax = rcount;

            /* new repetition, reset count */
            rcount = 0;
        }

        t = c;
        rcount++;
    }

    printf("%lu", rcmax);

    return 0;
}