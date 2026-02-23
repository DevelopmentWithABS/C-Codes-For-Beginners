// Author: DevelopmentWithABS
// YouTube: DevelopmentWithABS
// License: MIT

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,rem;
    printf("\nEnter a number: ");
    scanf("%d", &a);

    rem = a%2;

    if(rem == 0)
        printf("\nAap ka number even h!");
    else if(rem == 1)
        printf("\Wow! yay to odd h!");
    else
        printf("\nYa to galat baat h!");

    return 0;

}
