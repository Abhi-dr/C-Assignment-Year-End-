#include <stdio.h>

int main()
{
    int units;
    
    printf("Enter the units you've used: ");
    scanf("%d", &units);
    
    int total;
    
    if (units <= 50){
        total = 0.5*units;
    }
    
    else if (units <= 150){
        total = 25 + ((units-50) * 0.75);
    }
    
    else if(units <= 250)
    {
        total = 100 + ((units-150) * 1.20);
    }
    else
    {
        total = 220 + ((units-250) * 1.50);
    }

    int extra = total * 0.2;
    total += extra;
    
    printf("Total charge: %d", total);
    
}
