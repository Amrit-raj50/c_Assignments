#include<stdio.h>
int main(){
    for(int i = 65 ; i <= 69; i++)
    {
        for(int j = 65; j < i ; j++)
        printf(" ");

        for(int k = 65 ; k <= i ; k++)
        printf("%c",k);

    printf("\n");
    }

    return 0;
}