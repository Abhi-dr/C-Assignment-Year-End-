#include <stdio.h>

int main()
{
    float a, b, c, d , e;
    printf("Enter the marks of 5 subjects: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    
    float total = a + b + c + d + e;
    float avg = (float) total / 5;
    
    printf("Total = %0.2f\nAverage = %0.2f\nPercentage = %0.2f%%", total, avg, avg);
    
}
