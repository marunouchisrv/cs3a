/**
 * Pointers: memory management and custom types.
 * 
 * Copyright (c) 2021, Cody Coleman.
*/

#include <cstdio>
#include <cinttypes>
#include <string>

typedef uint8_t * byteptr;


// typedef is just an alias for a type
// typedef double myDouble;

int main() {
    byteptr bp1 = new uint8_t[0x20];
    // Allocates a single double
    double *dp1 = new double;

    // Create an unassigned pointer and then assign a valu
    double *dp2; //NOT usable by itself
    dp2 = dp1; // No memory allocation



    // Allocates 16 bytes of character array
    char *s1 = new char[0x10];

    //Allocates 256 * 8 = 2048 bytes of int64_t array
    int64_t *la1 = new int64_t[0x100];

    //Note the [] for deallocating arrays.
    delete dp1;
    //Not allowed since that memory has already been deallocated
    //delete dp2;
    delete [] s1;
    delete [] la1;
}