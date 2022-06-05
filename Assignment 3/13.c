#include <stdio.h>

int main()
{
    float a1, a2, a3;
    printf("Enter the 3 angles of the Triangle: ");
    scanf("%f %f %f", &a1, &a2, &a3);
    
    float result = a1 + a2 + a3;
    
    if (result == 180){
        printf("Valid");
    }
    
    else{
        printf("Invalid");
    }
    
}
