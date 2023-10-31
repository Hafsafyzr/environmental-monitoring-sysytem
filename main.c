#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height, width, perimeter, area;
    printf("enter height: \n");
    scanf("%d", &height);

    printf("Enter width: \n");
    scanf("%d", &width);

    perimeter = (height + width) * 2;
    area = height * width;
    printf("%d\n", perimeter);
    printf("%d\n", area);

}
