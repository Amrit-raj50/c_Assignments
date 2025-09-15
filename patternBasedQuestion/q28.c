#include<stdio.h>
int main(){
    for(int i = 73 ; i >= 65 ; i-=2)
    {
        for(int j = i; j <= 73; j+=2)
        printf("  ");

        for(int k = 65 ; k <= i ; k++)
        printf("%c ",k);

        printf("\n");
    }
    return 0;
}