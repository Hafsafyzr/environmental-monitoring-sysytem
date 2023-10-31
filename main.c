#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf("Enter height in centimeters: \n");
    scanf("%d", &height);
    if (height < 150){
        printf("Dwarf");
    }else if (height = 150){
        printf("Average");
    }else {
        printf("tall");
    }
}
