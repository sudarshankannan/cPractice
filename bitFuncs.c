#include <stdio.h>

int insertion(int num1, int num2, int i, int j){
    // input: N=10000000000, M=10011, i=2, j=6
    // Output: N=10001001100
     
}
//prints an individual bit
void printBitAt(int num, int bitPlace){

}
//printBitsInReverse
void printAllBits(int num){
    unsigned int temp, testnum =num;
    int size = sizeof(testnum) * 8;
    unsigned int mask = 1<<(size-1);
    if(num==0){
        printf("%u", 0);
    }
    while(testnum>0){
        temp = testnum;
        printf("%u", temp & mask ? 1:0);
        testnum = testnum<<1;
    }
    printf("\n");
}
//main method
int main(){
    printAllBits(13);
}