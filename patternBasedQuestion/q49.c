#include <stdio.h>
int main(){
    int count=65;
    for(int i = 65; i <= 68 ; i++)
    {
        for(int j = 65; j <= 68 ; j++){
          printf("%c ",count++);
        }

        printf("\n");
    }
    return 0;
}