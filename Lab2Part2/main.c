// Author: DevelopmentWithABS
// YouTube: DevelopmentWithABS
// License: MIT

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, result;
    printf("\nEnter n: ");
    scanf("%d", &n);

    if(n<3)
        result = -n-4;
    else if((n>=3)&&(n<=10))
        result = (n*n) -7;
    else if(n>10)
        result = (120.0/n) + n;

    printf("\nF[x] = %d",result);

    return 0;
}
