#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[9] = {1,2,3,4,5,6,7,8,9};
    int *ptra;
    //int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][2] = {{1,2},{4,5},{7,8}};
    int *ptrb;
    
    ptra = (int*)malloc(9*sizeof(int)); //ptra points to array size 9
    ptrb = (int*)malloc(3*3*sizeof(int)); //ptrb points to a 3x3 array
    int count = 0;
    //copy a's elements in reverse to ptra's array
    for(int i=sizeof(a)/sizeof(int)-1; i>=0; i--){
        ptra[count++] = a[i];
    }
    //copy b's elements to ptrb's array in the same order
    for(int z=0; z<6; z++){
        ptrb[z] = b[z/2][z%2];
    }
    //print elements of ptra and ptrb
    for(int x=0; x<9; x++){
        printf("%d ",ptrb[x]);
    }
    //de-allocate the memory blocks of ptra and ptrb
    free(ptra);
    free(ptrb);
    return 0;
}