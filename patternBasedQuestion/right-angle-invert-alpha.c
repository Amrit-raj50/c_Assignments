#include <stdio.h>
int main(){
    for(int i = 69 ; i >= 65 ; i--)
    {
        for(int j = 68 ; j >= i ; j--)
        printf("  ");

        for(int k = 65 ; k <= i ; k++)
        printf("%c ",k);

        printf("\n");
    }
}