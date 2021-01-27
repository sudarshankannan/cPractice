#include <stdio.h>

int insertion(int num1, int num2, int i, int j){
    // input: N=10000000000, M=10011, i=2, j=6
    // Output: N=10001001100
    int allOnes = ~0; // will equal sequence of all ls
    int leftMask = allOnes << (j+1);
    int rightMask = ((1<<i)-1);
    int mask = leftMask | rightMask;
    //clear bits i-j in num1 and move num2 bits into their correct position
    num1 = num1 & mask;
    num2 = num2 << i;
    //set num1 bits i-j with num2 bits
    return (num1 | num2);
}
//printBinary(double num)
void printBinary(double num){
    char numString[32];
    if(num>=1 || num<=0){
        return "ERROR";
    }
    int count = 1;
    numString[0] = '.';
    while(num>0){
        if(count>=32){
            printf("Error\n");
            return;
        }
        double r = num * 2;
        if(r>=1){
            
        }
        else{
            
        }
    }
    //print numString
}
//flip bit to win
int flipToWin(int num){
    int allBits[32];
    int countArr[32];
    bool allZero = false;
    for(int i=0; i<32; i++){
        allBits[i] = getBitAt(num,i);
        if(allZero == true && allBits[i]==1){
            allZero = false;
        }
    }
    if(allZero == true){
        return 1;
    }
    countArrIndex = 0;
    int oneCount = 0;
    for(int z=0; z<32; z++){
        if(allBits[z] == 1){
            oneCount++;
        }
        else{
            countArr[countArrIndex] = oneCount;
            oneCount = 0;
            countArr[++countArrIndex] = 0;
        }
    }
    int max = 1;
    for(int x=0; x<countArrIndex-2; x++){
        if(countArr[x]+1+countArr[x+2] < max){
            max = countArr[x]+1+countArr[x+2];
        }
    }
}
//returns an individual bit
int getBitAt(int num, int bitPlace){
    unsigned int temp, testnum =num;
    unsigned int mask = 1<<bitPlace;
    if(num==0){
        return 0;
    }
    temp = testnum;
    return (temp & mask ? 1:0);
}
//prints an individual bit
void printBitAt(int num, int bitPlace){
    unsigned int temp, testnum =num;
    unsigned int mask = 1<<bitPlace;
    if(num==0){
        printf("%u", 0);
    }
    temp = testnum;
    printf("%u", temp & mask ? 1:0);
    printf("\n");
}
//prints all the bits
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
    printAllBits(134);
    printBitAt(13,4);
}