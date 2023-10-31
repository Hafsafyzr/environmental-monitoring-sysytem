#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ID;
    printf("Enter employee ID: \n");
    scanf("%d",& ID);

    int hrs;
    printf("Enter total worked hours in the month: \n");
    scanf("%d", &hrs);

    int amount;
    float p;
    printf("Enter amount per hour: \n");
    scanf("%d", &amount);

    printf("%d\n", ID);
    p = hrs * amount;
    printf("%.2f", p);
}
