#include<stdio.h>
int main(){
  int n = 8 ;
    for(int i = 1 ; i <= n*2-1 ; i+=2)
    {
        for(int j = n*2-3 ; j >= i  ; j=j-2 )
          printf("@");

        for(int k = 1 ; k <= i; k++)
          printf("*");

        printf("\n");
    }
}