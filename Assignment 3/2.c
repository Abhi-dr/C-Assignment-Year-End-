#include <stdio.h>

int main()
{
    int days;
    int years, months;
    printf("Enter the number of days: ");
    scanf("%d", &days);
    
    years = days / 365;
    days -= (years * 365);
    
    months = days / 30;
    days -= (months * 30);
    
    printf("%d Years, %d Months and %d Days", years, months, days);
    
}
