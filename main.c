/**
 * Kostra programu pro vypocet Fibonacciho cisel
 * 2020, Ales Smrcka
 */
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long int ull;

/**
 * Fib(n) =
 *  0                   n=0
 *  1                   n=1
 *  Fib(n-1)+Fib(n-2)   n>1
 *
 * 1. Naprogramujte funkci rekurzivne.
 * 2. Zjistete, kolikrat byla funkce volana.
 * 3. Akcelerujte vypocet pomoci statickeho nebo globalniho pole vysledku.
 */
ull fib(ull n, int* cout)
{
    (*cout)++;
    ull result;
    if(n == 0) result = 0;
    else if (n == 1) result = n+fib(n-1, cout);
    else if(n>1) {
        result = fib(n-2, cout)+fib(n-1, cout);
    }
    //printf("%llu\n", result);
    return result;
}

int main(int argc, char **argv)
{
    ull n;
    int cout = 0;
    if (argc < 2)
        return 1;
    n = strtoul(argv[1], NULL, 10);

    ull fibo = fib(n, &cout);
    printf("fib(%llu) = %llu\ncout = %d\n", n, fibo, cout);
    //printf("nf = %llu\n", nf);
    return 0;
}
