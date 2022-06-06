#include <stdio.h>


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    
    
    for (int i = 1; i <= number; i++){
        
        int total = 0;
        
        for (int j = 1; j <= i/2; j++){
            if (i % j == 0){
                total += j;
            }
        }
        
        if (total == i){
            printf("%d ", i);
        }
    
    }
    
}
