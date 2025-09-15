#include<stdio.h>
int main(){
    for(int i = 9 ; i >= 1 ; i-=2)
    {
        for(int j = i; j <= 9; j+=2)
        printf("  ");

        for(int k = 1 ; k <= i ; k++)
        printf("%d ",k);

        printf("\n");
    }
    return 0;
}