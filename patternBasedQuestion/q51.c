#include <stdio.h>
int main(){
    int n = 7;
    int c=65;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = i ; j >= 1; j--)
        {
            if(j % 2 == 0)
            printf("0");
            else
            printf("1");
        }
     printf("\n");
    }
    return 0;
}