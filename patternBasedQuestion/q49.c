#include <stdio.h>
int main(){
  int n = 10;
    int count=65;
    for(int i = 65; i <= 65 + n - 1 ; i++)
    {
        for(int j = 65; j <= 65 + n - 1 ; j++){
          printf("%c ",count++);
        }

        printf("\n");
    }
    return 0;
}