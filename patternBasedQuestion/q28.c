// #include<stdio.h>
// int main(){
//     int n = 7 ;
//     for(int i = 65+n-1  ; i >= 65 ; i-=2)
//     {
//         for(int j = i; j < 65+n-1; j+=2)
//         printf("* ");

//         for(int k = 65 ; k <= i ; k++)
//         printf("%c ",k);

//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// int main(){
//     int n = 5,j = 1;
//     for(int i = n*2-1 ; i >= 5 ; i--)
//     {
       
//     }
// }




#include<stdio.h>
int main(){
    int n = 5;
    for(int i = n*2-1 ; i >= 1 ; i-=2)
    {
        for(int j = i; j < n*2-1; j+=2)
        printf("  ");

        for(int k = 1 ; k <= i ; k++)
        printf("%c ",'A'+k-1);

        printf("\n");
    }
    return 0;
}