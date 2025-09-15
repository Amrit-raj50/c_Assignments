#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 9 ; i+=2)
    {
        for(int j = i; j >= 3; j-=2)
        printf(" ");

        for(int k = 9 ; k >= i ; k--)
        printf("*");

        printf("\n");
    }
    return 0;
}