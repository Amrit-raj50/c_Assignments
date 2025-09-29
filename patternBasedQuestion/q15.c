#include<stdio.h>
int main(){
  int n = 9;
    for(int i = 65 ; i <= 65+n ; i+=2)
    {
        for(int j = 65+n ; j >= i  ; j=j-2 )
          printf("  ");

        for(int k = 65 ; k <= i; k++)
          printf("%c ",k);

        printf("\n");
    }
}