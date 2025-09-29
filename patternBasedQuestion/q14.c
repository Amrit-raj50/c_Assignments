#include<stdio.h>
int main(){
    int n = 5;
    for(int i = 1 ; i <= n*2-1 ; i+=2)
    {
        for(int j =n*2-3  ; j >= i ; j-=2)
        printf("@ ");
        
        for(int k = 1 ; k <= i ; k++)
        printf("%c ",'A'+k-1);

        printf("\n");
    }
    return 0;
}