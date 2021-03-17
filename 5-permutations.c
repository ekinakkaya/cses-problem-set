/* https://cses.fi/problemset/task/1070 */

#include <stdio.h>

typedef unsigned long long int ll;

int main() {
    ll n;

    scanf("%llu", &n);

    if (n == 1) {
        printf("1");
        return 0;
    } else if (n < 4) {
        printf("NO SOLUTION");
        return 0;
    } else if (n == 4) {
        printf("2 4 1 3");
        return 0;
    }

    for (ll i = 1; i < n + 1; i += 3) {
        printf("%llu ", i);
    }

    for (ll i = 2; i < n + 1; i += 3) {
        printf("%llu ", i);
    }

    for (ll i = 3; i < n + 1; i += 3) {
        printf("%llu ", i);
    }

    return 0;
}