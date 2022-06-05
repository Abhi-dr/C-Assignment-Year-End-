#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    
    year%400==0?printf("Leap Year"):printf("NOT a Leap Year");
    
}
