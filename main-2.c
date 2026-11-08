/*
 * Защита 2.3
 * Copyright (c) 2026 ankh-331one
 *
 * Licensed under the MIT License; see LICENSE file for details.
 */
///найти макс Ai^Ci


#include <stdio.h>
#include <malloc.h>
#include <locale.h>
#include <math.h>


int main()
{
    setlocale(0, "");
    setlocale(LC_NUMERIC, "C");

    printf("\n--------------------------------------------------------------------------------\n");
    int n;
    do{
        printf("\nВведите количество элементов n: ");
        scanf("%d", &n);
        if (n <= 0 || n >= 100){
            printf("\n================================================================================\n\t\t");
            printf("Ошибка: нарушен диапазон входных данных\n");
            printf("================================================================================\n");
        }
    }while (n <= 0 || n >= 100);

    printf("\n--------------------------------------------------------------------------------\n");

    double *A;
    A = (double*)malloc((n+1) * sizeof(double));
    printf("\nВведите элементы массива A:\n");
    for (int i = 1; i <= n; i++){
        printf("\nA[%d]: ", i);
        scanf("%lf", &A[i]);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    double *C;
    C = (double*)malloc((n+1) * sizeof(double));
    printf("\nВведите элементы массива C:\n");
    for (int i = 1; i <= n; i++){
        printf("\nC[%d]: ", i);
        scanf("%lf", &C[i]);
    }

    printf("\n--------------------------------------------------------------------------------\n");

    printf("\nВведeнo массив A: [ %g", A[1]);
    for (int i = 2; i <= n; i++){
        printf("; %g", A[i]);
    }
    printf(" ]\n");

    printf("\nВведeнo массив C: [ %g", C[1]);
    for (int i = 2; i <= n; i++){
        printf("; %g", C[i]);
    }
    printf(" ]\n");





    double max = pow(A[1],C[1]);
    for (int i = 1; i <= n; i++){
        if (pow(A[i],C[i]) > max){
            max = pow(A[i],C[i]);
        }
    }

    printf("\n================================================================================\n\n\t\t");

    printf("Результат: %g", max);

    printf("\n\n================================================================================\n");

    free(A);
    free(C);

    return 0;
}
