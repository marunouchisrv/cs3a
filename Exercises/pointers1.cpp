/**
 * Pointers
 * 
 * Copyright (c) 2021, Cody Coleman.
*/

#include <cstdio>
#define p(a, ap) (printf("a = %d, ap =  "))

int si1 = 10;
int si2 = 100;

int main()
{
    int *si1p = &si1;
    printf("si1 = %d, si1p = %p, si1p = %d\n", si1, si1p, *si1p);

    int *si2p = &si2;
    (*si2p)++;
    printf("si2 = %d, si2p = %p, si2p = %d\n", si2, si2p, *si2p);
    
    int i1 = 100;
    int i2 = 22;
    int *i1p = &i1;
    printf("i1 = %d, i1p = %p\n", i1, i1p);

    
    int *i2p = &i2;
    printf("i2 = %d, i2p = %p\n", i2, i2p);
}