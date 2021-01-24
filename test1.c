#include <stdio.h>
#include <string.h>
#include "PointerFuncs.h"

struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
}

int main(){
    int arr[] = {3,5,6,7,9};
    int *p = arr; //stores address of arr[0]
    int (*ptr)[5] = &arr; //stores starting address of arr (array start)
    /*printf("p = %p, ptr = %p\n",p,ptr); // p = ptr = 0x7ffca4910e60
    printf("*p = %d, *ptr = %p\n",*p,*ptr); // *p = 3, *ptr = 0x7ffca4910e60
    printf("sizeof(p) = %ld, sizeof(*p) = %ld\n",sizeof(p),sizeof(*p)); 
    printf("sizeof(ptr) = %ld, sizeof(*ptr) = %ld\n",sizeof(ptr),sizeof(*ptr)); 
    //why sizeof(p) = sizeof(ptr)=8? because pointers are 8 bytes*/
    struct Books *book1;
    struct Books book2;
    struct Books **book3;
    //initialize book2
    strcpy(book2.title,"Java Programming for Beginners");
    strcpy(book2.author,"Steve Smith");
    strcpy(book2.subject,"Java");
    book2.book_id = 13;
    //initialize book1
    strcpy(book2->title,"Java Programming for Beginners");
    strcpy(book2->author,"Steve Smith");
    strcpy(book2->subject,"Java");
    book1->book_id = 13;
    //book3
    strcpy(*(book2)->title,"Java Programming for Beginners");
    strcpy(*(book2)->author,"Steve Smith");
    strcpy(*(book2)->subject,"Java");
    *(book3)->book_id = 13;
    return 0;
}
