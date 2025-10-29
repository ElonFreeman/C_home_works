#include <stdio.h>
int main()
{   
   char first_letter_upper, second_letter_lower;
   char trans_first_letter_lower, trans_second_letter_upper;
   scanf("%c %c", &first_letter_upper, &second_letter_lower);
   trans_first_letter_lower=first_letter_upper+32;
   trans_second_letter_upper=second_letter_lower-32;
    printf("%c%c\n", trans_first_letter_lower, trans_second_letter_upper);  
    return 0;
}