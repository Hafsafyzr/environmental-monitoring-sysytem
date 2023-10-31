#include <stdio.h>
#include <stdlib.h>
void Binary(int x){
    if (x > 0){
        Binary(x / 2) ;
        printf("%d",x % 2);
    }
}
int main()
{
   int x;
   printf("Enter number: \n");
   scanf("%d", &x);
   Binary(x);
   return 0;
}
