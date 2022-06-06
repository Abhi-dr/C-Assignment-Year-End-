#include <stdio.h>

void factorial(int number){
    
    int total = 1;
    
    for (int i = 1; i <= number; i++){
        total *= i;
    }
    
    printf("Factorial -> %d", total);
    
    
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    factorial(number);
    
}
