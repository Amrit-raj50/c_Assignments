#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 9 ; i+=2)
    {
        for(int j = 7 ; j >= i  ; j=j-2 )
          printf(" ");

        for(int k = 1 ; k <= i; k++)
          printf("*");

        printf("\n");
    }
}