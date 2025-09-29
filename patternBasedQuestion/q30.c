// #include<stdio.h>
// int main(){
//     for(int i = 65 ; i <= 69 ; i++)
//     {
//         for(int j = 73 ; j >= i; j--)
//         printf(" ");

//         for(int l = 65 ; l <= 69)

//         for(int k = 65 ; k <= i ; k++)
//         printf("%c",k);

//     printf("\n");
//     }

//     for(int i = 69 ; i >= 65 ; i--)
//     {
//         for(int j = 71 ; j >= i ; j--)
//         printf(" ");

//         for(int k = 65 ; k <= i ; k++)
//         printf("%c",k);

//     printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
int main(){
    int count = 5 , dup = 0 ;
    for(int i = 1 ; i <= 4 ; i++)
    {
        int sub = dup;
        for(int j = 1 ; j < count; j++)
        {
            if()
            else if(j <= i)
            printf("%c",'A'+j-1);
            else
            {
                
                printf("%c",'A'+sub-1);
                sub--;
            }
            
        }

        dup++;
        count++;
        printf("\n");
    }
    return 0;
}