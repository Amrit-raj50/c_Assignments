#include <stdio.h>
int main(){
    int n = 10;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n*2-3 ; j++)
        {
            if(i == 1|| i == n)
            printf("*");
            else if(j == 1 || j == n*2-3)
            printf("*");
            else
            printf(" ");
        }
        printf("\n"); 
    }
    return 0;
}