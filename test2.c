#include <stdio.h>
#include <string.h>


const int MAX = 43;
char* toPigLatin(char* word);

int main(){
    // creation of 5 character strings, each length MAX
    char word[5][MAX];
    int i;				// loop counter

    printf("Input 5 words: ");
    for (i = 0; i < 5; i++){
        scanf("%s",word[i]);
        printf(" ");
    }
    printf("\n");
    for (i = 0; i < 5; i++){
        printf("%s",word[i]);
        printf(" ");
    }
    printf("\n");
    /*
    printf("\nPig Latin version of the 5 words:\n");
    for (i = 0; i < 3; i++){
        toPigLatin(word[i]);
        printf("%s ",word[i]);
    }
    printf("\n");
    // Note that the above outputs illustrate that the original
    //  string itself has been converted.  The outputs below illustrate
    //  that a pointer to this string is also being returned from the 
    //  function.
    printf("%s ",toPigLatin(word[3]));
    printf("%s \n",toPigLatin(word[4]));*/
    return 0;
}

// Write your definition of the ToPigLatin function here
char* toPigLatin(char* word){
    // 1)If a word starts with a vowel, the Pig Latin version is the
    //   original word with "way" added to the end
    // 2)If a word starts with a consonant, or a series of 
    //   consecutive consonants, the Pig Latin version transfers all consonants up to 
    //   the first vowel to the end of the word, and adds "ay" to the end.
    // 3)The letter 'y' should be treated as a consonant if it is the first letter of a word, 
    //   but treated as a vowel otherwise.
    // 4)If the original word is capitalized, the new Pig Latin 
    //   version of the word should be capitalized in the first letter 
    //   (i.e. the previous capital letter may not be capitalized any more).
    int length;
    char *ayEnding = "AY";
    //check first character
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        length = sizeof(word) + 3;
    }
    else{
        length = sizeof(word) + 2;
    }


    const int LENGTH = sizeof(*word);
    char* finalPig;
    char tempPig[LENGTH];
    finalPig = tempPig;
    //check if starts with vowel
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || 
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {

    } 
    //go through the loop
    for(int i=0; i<sizeof(*word); i++){
        if((int)(word[i])>=65 && (int)(word[i]<=90)){
            if()
        }
        else if((int)(word[i])>=97 && (int)(word[i]<=122)){

        }
        else if((int)(word[i]) == 39){

        }
    }
}