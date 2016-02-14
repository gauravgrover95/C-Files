#include <stdio.h>

int main() {

    int rem;
    int gcd;
    int m,n;

    scanf("%d%d", &m, &n);

    do{
        rem = m%n;
        m=n;
        n=rem;
    } while(rem != 0);

    printf("GCD: %d\n", m);
}