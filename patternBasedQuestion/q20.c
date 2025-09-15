#include <stdio.h>
int main(){
    int c=65;
    for(int i = 1 ; i <= 6 ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
        printf("%c ",c++);

        printf("\n");
    }
}