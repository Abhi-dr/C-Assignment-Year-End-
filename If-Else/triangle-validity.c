#include <stdio.h>

int main()
{
    int a, b, c;
    
    printf("Enter the value of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a + b + c != 180){
        printf("Invalid");
    }
    
    else{
        printf("Valid...");
    }
    
    
}
