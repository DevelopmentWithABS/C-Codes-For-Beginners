// Author: DevelopmentWithABS
// YouTube: DevelopmentWithABS
// License: MIT

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int layers[10] = {0,0,0,0,0,0,0,0,0,0};

    printf("\nEnter any number(0-5) to see the magic: ");
    scanf("%d", &n);

    //core code *********************************
    for(int j = 0; j <=9; j++)
    {
        for(int i = 0; i <=9; i++)
            {
                //Conditions ********************
                if(n==0)
                {
                   if(j==8)
                   {
                       layers[0] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                }
                if(n==1)
                {
                   if(j==7)
                   {
                       layers[0] = 1;
                   }
                   if(j==8)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 0;
                       layers[1] = 1;
                       layers[2] = 1;
                   }
                }
                if(n==2)
                {
                   if(j==6)
                   {
                       layers[0] = 1;
                   }
                   if(j==7)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                   if(j==8)
                   {
                       layers[0] = 0;
                       layers[1] = 1;
                       layers[2] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 1;
                       layers[3] = 1;
                   }
                }
                if(n==3)
                {
                   if(j==5)
                   {
                       layers[0] = 1;
                   }
                   if(j==6)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                   if(j==7)
                   {
                       layers[0] = 0;
                       layers[1] = 1;
                       layers[2] = 1;
                   }
                   if(j==8)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 1;
                       layers[3] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 1;
                       layers[4] = 1;
                   }
                }
                if(n==4)
                {
                   if(j==4)
                   {
                       layers[0] = 1;
                   }
                   if(j==5)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                   if(j==6)
                   {
                       layers[0] = 0;
                       layers[1] = 1;
                       layers[2] = 1;
                   }
                   if(j==7)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 1;
                       layers[3] = 1;
                   }
                   if(j==8)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 1;
                       layers[4] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 0;
                       layers[4] = 1;
                       layers[5] = 1;
                   }
                }
                if(n==5)
                {
                   if(j==3)
                   {
                       layers[0] = 1;
                   }
                   if(j==4)
                   {
                       layers[0] = 1;
                       layers[1] = 1;
                   }
                   if(j==5)
                   {
                       layers[0] = 0;
                       layers[1] = 1;
                       layers[2] = 1;
                   }
                   if(j==6)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 1;
                       layers[3] = 1;
                   }
                   if(j==7)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 1;
                       layers[4] = 1;
                   }
                   if(j==8)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 0;
                       layers[4] = 1;
                       layers[5] = 1;
                   }
                   if(j==9)
                   {
                       layers[0] = 0;
                       layers[1] = 0;
                       layers[2] = 0;
                       layers[3] = 0;
                       layers[4] = 0;
                       layers[5] = 1;
                       layers[6] = 1;
                   }
                }
                printf("%d ", layers[i]);
            }
        printf("\n");
    }

    return 0;

}
