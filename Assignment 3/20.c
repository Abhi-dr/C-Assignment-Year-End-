#include <stdio.h>

int myfun(int number){
    
    int reversed = 0;
        
    while (number > 0){
        int last = number % 10;
        reversed = (reversed * 10) + last;
        number /= 10;
    }
    

    while (reversed > 0){
        
        int num;
        
        num = reversed % 10;
        
        switch (num){
            
            case 1: printf("One ");
            break;
            
            case 2: printf("Two ");
            break;
            
            case 3: printf("Three ");
            break;
            
            case 4: printf("Four ");
            break;
            
            case 5: printf("Five ");
            break;
            
            case 6: printf("Six ");
            break;
            
            case 7: printf("Seven ");
            break;
            
            case 8: printf("Eight ");
            break;
            
            case 9: printf("Nine ");
            break;
            
            case 0: printf("Zero ");
            break;
            
            
        }
        
        reversed /= 10;
        
    }
    
}


int main()
{
    
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    myfun(number);
    
    
}
