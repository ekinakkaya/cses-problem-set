/* https://cses.fi/problemset/task/1070 */

#include <stdio.h>

typedef unsigned long long int ll;

int main() {
    ll n;

    scanf("%lu", &n);

    if (n <= 4) {
        printf("NO SOLUTION");
        return 0;
    }

    for (ll i = 1; i < n + 1; i += 3) {
        printf("%lu ", i);
    }

    for (ll i = 2; i < n + 1; i += 3) {
        printf("%lu ", i);
    }

    for (ll i = 3; i < n + 1; i += 3) {
        printf("%lu ", i);
    }

    return 0;
}