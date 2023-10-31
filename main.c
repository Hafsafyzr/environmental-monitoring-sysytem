#include <stdio.h>
#include <stdlib.h>
void fibonacci(int n){
    int i;
    int t1 = 0, t2 = 1;

    if (n >= 1){
        printf("%d", t1);
    }
    if (n >= 2){
        printf("%d", t2);
    }
    for (i = 3; i <= n; ++i){
        int nextTerm = t1 + t2;
        printf("%d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 +t2;
    }


}
int main()
{
    int n;
   printf("Enter number: \n");
   scanf("%d", &n);

   fibonacci(n);
   printf("%d", n);
   return n;
}
