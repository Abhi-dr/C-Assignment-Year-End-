#include <stdio.h>

int main()
{
    float centimeter;
    printf("Enter the length in Centimeter: ");
    scanf("%f", &centimeter);
    
    int kilometer = centimeter / 100000;
    centimeter -= (kilometer * 100000);
    
    int meter = centimeter / 100;
    centimeter -= (meter * 100);
    
    printf("%d km %d m %0.2f cm", kilometer, meter, centimeter);
    
}
