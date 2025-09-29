#include<stdio.h>
int main(){
    int n = 6;
    for(int i = 1 ; i <= n*2-1 ; i+=2)
    {
        for(int j = n*2-3 ; j >= i; j-=2 )
        printf(" ");

        for(int k = 1 ; k <= i ;k++)
        {
            if(i == n*2-1)
            printf("*");
            else if(k == 1 || k == i)
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}