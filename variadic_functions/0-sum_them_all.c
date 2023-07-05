#include "variadic.h"
/*
 * *
 * *
 * **/

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
    if (n == 0)
        return 0;

    int sum = 0;
    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; ++i) {
        int num = va_arg(args, int);
        sum += num;
    }

    va_end(args);
    return sum;
}

int main()
{
    int sum1 = sum_them_all(3, 1, 2, 3);
    int sum2 = sum_them_all(5, 10, 20, 30, 40, 50);
    int sum3 = sum_them_all(0);

    printf("Sum1: %d\n", sum1);
    printf("Sum2: %d\n", sum2);
    printf("Sum3: %d\n", sum3);

    return 0;
}

