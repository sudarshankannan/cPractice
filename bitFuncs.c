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
    int count = 0;
    int temp;
    int valAtBit;
    int output;
    if(num==0){
        printf("%d", 0);
    }    
    while(num>0){
        temp = num;
        output = temp & 1;
        printf("%d", output);
        num = num<<1;
    }
}
//main method
int main(){
    printAllBits(13);
}