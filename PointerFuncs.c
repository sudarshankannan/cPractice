#include <stdio.h>
#include <string.h>
#include "PointerFuncs.h"

void addPointers(int* a, int* b){
    int temp = *a + *b; //dereference pointers and add
    printf("The sum of %d and %d is %d\n", *a, *b, temp);
}
/*void printArray(int* arr){
    for(int i=0; i<arr.sizeof)
}*/
void swap(int* a, int* b){
    int temp = *a;
    *a = *b; //set a's contents to b's contents
    *b = temp; //set b's contents to a's former contents
}