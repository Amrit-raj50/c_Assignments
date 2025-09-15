#include<stdio.h>
int main(){
    for(int i = 65 ; i <= 69 ; i++)
    {
        for(int j = 73 ; j >= i; j--)
        printf(" ");

        for(int l = 65 ; l <= 69)

        for(int k = 65 ; k <= i ; k++)
        printf("%c",k);

    printf("\n");
    }

    for(int i = 69 ; i >= 65 ; i--)
    {
        for(int j = 71 ; j >= i ; j--)
        printf(" ");

        for(int k = 65 ; k <= i ; k++)
        printf("%c",k);

    printf("\n");
    }

    return 0;
}