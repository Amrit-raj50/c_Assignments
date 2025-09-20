#include <stdio.h>
int main(){
    int n= 9;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            if(i == 1 || i == n)
            printf("*");
            else if(i == n/2+1)
            {
                if(j == 1 || j == n/2+1 || j == n)
                printf("*");
                else
                printf(" ");
            }
            else
            {
                if(j == 1 || j == n)
                printf("*");
                else
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}