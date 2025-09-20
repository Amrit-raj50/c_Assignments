#include <stdio.h>
int main(){
    int n = 7;
   for(int i = 1; i <= n; i++)
   {
    for(int j = 1 ; j <= n ; j++)
    {
        int top = i - 1;
        int bot = n - i ;
        int left = j - 1; 
        int right = n - j ;

        int min = top < bot ? top : bot ;
        int min1 = left < right ? left : right;

        int rel_min = min < min1 ? min : min1;
        
        printf("%d",rel_min+1);
    }
    printf("\n");
   }
   return 0;
}