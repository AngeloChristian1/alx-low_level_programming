#include "main.h"
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int carry = 0, sum, len1, len2, i, j;
    char *p, *q;

    len1 = strlen(n1);
    len2 = strlen(n2);
    if (len1 >= size_r || len2 >= size_r)
        return 0;

    p = n1 + len1 - 1;
    q = n2 + len2 - 1;
    for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        sum = carry;
        if (i >= 0)
            sum += *p-- - '0';
        if (j >= 0)
            sum += *q-- - '0';
        if (sum > 9) {
            carry = 1;
            sum -= 10;
        } else {
            carry = 0;
        }
        if (r + size_r - 1 - j < r)
            return 0;
        *(r + size_r - 1 - j) = sum + '0';
    }

    if (carry) {
        if (r + size_r - 1 - j < r)
            return 0;
        *(r + size_r - 1 - j) = '1';
        j--;
    }

    if (r + size_r - 1 - j < r)
        return 0;
    *(r + size_r - 1 - j) = '\0';

    return r + size_r - 1 - j;
}
