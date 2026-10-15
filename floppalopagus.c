#include <stdio.h>

int main()  //sets up int
{
    int hours; 
    printf("How many hours of revision have you done today?: \n"); //allows user to input how many hours they have done today, saves as hours
    scanf("%d", &hours); //takes in input saves it to hours

    int hoursLeft = 4 - hours;  //math equation to calculate hoursLeft from hours 

    if(hoursLeft < 4) 
    {
        printf("You need to do %d more hours of revision. \n", hoursLeft); //only printed if hoursLeft is less than 4 
    }
    else
    {
        printf("Well done, take a break. \n"); //else prints this statement 
    }
}

