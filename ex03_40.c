#include<stdio.h>



int main()
{
    int i,j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<16;j++)
            if((i+j)%2==0)
                {
                    printf("*");
                }
            else
            printf(" ");
        printf("\n");
    }
    return 0;
}
