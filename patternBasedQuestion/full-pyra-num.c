#include<stdio.h>
int main(){
    for(int i = 7 ; i >= 4 ; i--)
    {
        for(int j = 4 ; j <= 7  ; j++ )
        {
          if(j <= i-1)
          printf(" ");
          else
          printf("* ");
        }


        printf("\n");
    }
}