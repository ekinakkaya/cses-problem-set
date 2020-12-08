/* https://cses.fi/problemset/task/1068 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned long int i;
    scanf(" %lu", &i);

    while (i != 1) {
        printf("%lu ", i);
        i = (i % 2 == 0) * (i / 2)  + (i % 2 == 1) * (i * 3 + 1);
    }
    printf("%i", i);
    return 0;
}