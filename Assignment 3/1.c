#include <stdio.h>

int main()
{
    float a;
    float celsius;
    printf("Enter the Celsius: ");
    scanf("%f", &celsius);
    
    float result = (1.8*celsius) + 32;
    
    printf("Fahrenheit = %0.2f", result);
    
    
}
