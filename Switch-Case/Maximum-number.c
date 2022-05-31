#include <stdio.h>

int main()
{
    
    int user1, user2;
    printf("Enter the numbers: ");
    scanf("%d %d", &user1, &user2);
    
    switch (user1 > user2){
        case 0: printf("%d is greater", user2);
        break;
        
        case 1: printf("%d is greater", user1);
        break;
        
        default: printf("Invalid input");
        break;
    }
    
} 
