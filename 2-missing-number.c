/* https://cses.fi/problemset/task/1083 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    unsigned long int num;
    scanf(" %lu", &num);

    unsigned long int *nl;
    nl = (unsigned long int *) malloc((num-1) * sizeof(unsigned long int));

    for (int i = 0; i < num-1; i++) {
        scanf(" %lu", &nl[i]);
    }
    
    long int temp = 0;
    for (int i = 0; i < num - 1; i++) {
        temp = temp + (i + 1) - nl[i]; 
    }

    printf("%li", temp + num);
    free(nl);
    return 0;

    for (int i = 1; i < num + 1; i++) {

    }
    return 0;
}