#include<stdio.h>
int main(){
    // int n = 10;
    // for(int i = n*2-1 ; i >= 1 ; i-=2)
    // {
    //     for(int j = n*2-1 ; j > i ; j-=2)
    //     printf(" ");

    //     for(int k = 1 ; k <= i ; k++)
    //     {
    //         // if(i == n*2-1)
    //         // printf("*");
    //         // else if(k == 1 || k == i)
    //         // printf("*");
    //         // else
    //         // printf(" ");
    //         if(i == n*2-1)
    //         printf("*");
    //         else if(k == 1 || k == i )
    //         printf("*");
    //         else 
    //         printf(" ");
    //     }

    //     printf("\n");
    // }
    int n = 5;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1; j <= n*2-1 ; j++){
            if(j == i || j == n*2-i || i == 1)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}