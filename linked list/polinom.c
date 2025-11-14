#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int poly1[] = {4, 3, 2};
    int poly2[] = {2, 1};

    int deg1 = 2, deg2 = 1;
    int maxDeg = (deg1 > deg2) ? deg1 : deg2;

    int *sum = (int *)calloc(maxDeg + 1, sizeof(int));
    int *result = (int *)calloc(deg1 + deg2 + 1, sizeof(int));

    for (int i = 0; i <= maxDeg; i++) {
        int coef1 = (i <= deg1) ? poly1[deg1 - i] : 0;
        int coef2 = (i <= deg2) ? poly2[deg2 - i] : 0;
        sum[maxDeg - i] = coef1 + coef2;
    }

    printf("Sum: ");
    for (int i = 0; i <= maxDeg; i++)
        printf("%dx^%d ", sum[i], maxDeg - i);
    printf("\n");

    for (int i = 0; i <= deg1; i++)
        for (int j = 0; j <= deg2; j++)
            result[i + j] += poly1[i] * poly2[j];

    printf("Product: ");
    for (int i = 0; i <= deg1 + deg2; i++)
        printf("%dx^%d ", result[i], deg1 + deg2 - i);
    printf("\n");

    free(sum);
    free(result);

    return 0;
}
