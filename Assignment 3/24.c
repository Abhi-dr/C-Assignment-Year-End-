#include <stdio.h>

int main()
{
    int number, is_prime;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    for (int i = 2; i<= number; i++){
        
        if (number % i == 0){
            
            is_prime = 1;
            
            for (int j = 2; j <= i/2; j++){
                
                if (i % j == 0){
                    is_prime = 0;
                    break;
                }
                
            }
            
            if (is_prime == 1){
                printf("%d, ", i);
            }
            
        }
        
    }
    
}
