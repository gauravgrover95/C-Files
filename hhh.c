#include <stdio.h>

int is_even(int n) {

    if(n%2 == 0) { return 1; }
    else { return 0; }
}

int power(int m, int n) {

    if(n == 1) {

        return m;
    } else {

        int k;
        if(is_even(n)) {

            k = power(m, n/2) * power(m , n/2);
        } else {

            k = power(m, (n - 1)/2) * power(m, (n - 1)/2) * m;
        }
        return k;
    }

}

int main() {

    int z = power(10, 4);
    printf("%d\n", z);
}
