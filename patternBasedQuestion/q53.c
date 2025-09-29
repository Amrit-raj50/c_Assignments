#include <stdio.h>
int main(){
    int n = 4 ;
    int count = 1,range = n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= range ; j++)
        {
            if((i+j) >= n+1)
            {
                if(count % 10 == count)
                printf("%d  ",count++);
                else
                printf("%d ",count++);
            }
            else
            printf("  ");
        }
        printf("\n");
        range = range +1;
    }
    return 0;
}