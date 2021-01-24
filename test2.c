#include <stdio.h>
#include <string.h>

using namespace std;

const int MAX = 43;

char* ToPigLatin(char* word);

int main(){
   // creation of 5 character strings, each length MAX
   char word[5][MAX];
   int i;				// loop counter

   cout << "Input 5 words: ";
   for (i = 0; i < 5; i++)
       cin >> word[i];

   cout << "\nPig Latin version of the 5 words:\n";
   for (i = 0; i < 3; i++)
   {
      ToPigLatin(word[i]);
      cout << word[i] << ' ';
   }
   // Note that the above outputs illustrate that the original
   //  string itself has been converted.  The outputs below illustrate
   //  that a pointer to this string is also being returned from the 
   //  function.

   cout << ToPigLatin(word[3]) << ' '
        << ToPigLatin(word[4]) << '\n';

   return 0;
}

// Write your definition of the ToPigLatin function here
