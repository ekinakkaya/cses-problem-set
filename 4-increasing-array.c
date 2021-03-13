/* https://cses.fi/problemset/task/1094 */

#include <stdio.h>

#define  MAXARRSIZ    200000

int main() {
    unsigned long int i = 0, j, k = 0;
    unsigned long int a[MAXARRSIZ];

    scanf("%lu", &j);

    while (i < j) {
        scanf("%lu", &a[i]);

        if (i > 0 && a[i] < a[i-1]) {
            k += a[i-1] - a[i];
            a[i] = a[i-1];
        }
        i++;
    }

    printf("%lu", k);

    return 0;
}