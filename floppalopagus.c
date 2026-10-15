#include <stdio.h>

int main()
{
    int hours;
    printf("How many hours of revision have you done today?: \n");
    scanf("%d", &hours);

    int hoursLeft = 4 - hours;

    if(hoursLeft < 4)
    {
        printf("You need to do %d more hours of revision. \n", hoursLeft);
    }
    else
    {
        printf("Well done, take a break. \n");
    }
}

