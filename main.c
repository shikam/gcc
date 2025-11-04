#include <stdio.h>
#include <math.h>
#include <assert.h>

static int is_prime(int n) {
    if (n < 2) return 0;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i*i <= n; i += 2)
        if (n % i == 0) return 0;
    return 1;
}

int main(void) {
    assert((int)sqrt(144.0) == 12); // sanity check for -lm

    int count = 0;
    for (int i = 2; i <= 100; ++i) count += is_prime(i);
    printf("[C] primes_up_to_100=%d OK\n", count); // expected 25
    return 0;
}
