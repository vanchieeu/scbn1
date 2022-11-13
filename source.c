#include <stdio.h>

int main() {
    int n;
    do {
        scanf("%d", &n);
    } while (n < 1);

    long long a[n];
    for (int i = 0; i < n; i++)
        scanf("%lld", a+i);

    int d = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == a[i+1]) {
            d++;
        }

    printf("%d", d);
    return 0;
}