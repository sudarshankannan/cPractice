#include <stdio.h>
#include "PointerFuncs.h"

int main(){
    int arr[] = {3,5,6,7,9};
    /*int *p = arr; //stores address of arr[0]
    int (*ptr)[5] = &arr; //stores starting address of arr (array start)
    printf("p = %p, ptr = %p\n",p,ptr); // p = ptr = 0x7ffca4910e60
    printf("*p = %d, *ptr = %p\n",*p,*ptr); // *p = 3, *ptr = 0x7ffca4910e60
    printf("sizeof(p) = %ld, sizeof(*p) = %ld\n",sizeof(p),sizeof(*p)); 
    printf("sizeof(ptr) = %ld, sizeof(*ptr) = %ld\n",sizeof(ptr),sizeof(*ptr)); 
    //why sizeof(p) = sizeof(ptr)=8? because pointers are 8 bytes*/

    
    return 0;
}