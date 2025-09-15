#include<stdio.h>
int main(){
    for(int i = 9 ; i >= 1 ; i-=2)
    {
        for(int j = 9 ; j > i ; j-=2)
        printf(" ");

        for(int k = 1 ; k <= i ; k++)
        {
            if(i == 9)
            printf("*");
            else if(k == 1 || k == i)
            printf("*");
            else
            printf(" ");
        }

        printf("\n");
    }
    return 0;
}