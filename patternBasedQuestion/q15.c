#include<stdio.h>
int main(){
    for(int i = 65 ; i <= 73 ; i+=2)
    {
        for(int j = 73 ; j >= i  ; j=j-2 )
          printf("  ");

        for(int k = 65 ; k <= i; k++)
          printf("%c ",k);

        printf("\n");
    }
}