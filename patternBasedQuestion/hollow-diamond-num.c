#include<stdio.h>
int main(){
    for(int i = 1 ; i <= 9 ; i++)
    {
        for(int j = 1 ; j <= 9 ; j++)
        {
            if(i == 1 || i == 9)
            {
                if(j == 5)
                printf("%d",j);
                else
                printf(" ");
            }
            else if(i == 2 || i == 8)
            {
                if(j == 4 || j == 6)
                printf("%d",j);
                else
                printf(" ");
            }
            else if(i == 3 || i == 7)
            {
                if(j == 3 || j == 7)
                printf("%d",j);
                else
                printf(" ");
            }
            else if(i == 4 || i == 6)
            {
                if(j == 2 || j == 8)
                printf("%d",j);
                else
                printf(" ");
            }
            else{
                if(j == 1 || j == 9)
                printf("%d",j);
                else
                printf(" ");
            }

        }
        printf("\n");
    }
    return 0;
}