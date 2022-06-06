#include <stdio.h>

void factors(int number){
    
    for (int i = 1; i <= number; i++){
        if (number % i == 0){
            printf("Factor -> %d\n", i);
        }
    }
    
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    factors(number);
    
}
