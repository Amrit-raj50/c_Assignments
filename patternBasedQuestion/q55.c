#include<stdio.h>
int main(){
    int n = 5;
    int prt = 1, add = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = n-1 ; j >= i ; j--)
        printf(" ");

        printf("%d",prt);
        add = add * 10 + 11;
        prt = prt *100 + add;
        

        printf("\n");
    }
    for(int i = n-1 ; i >= 1 ; i--)
    {
        for(int j = n-1 ; j >= i ; j-- )
        printf(" ");

        add = add / 10 - 11;
        prt = prt / 100 - add;

        printf("\n");
    }
}