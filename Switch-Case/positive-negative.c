#include <stdio.h>

int main()
{
    
    int user;
    printf("Enter the number: ");
    
    scanf("%d", &user);
    
    switch (user>0){
        
        case 1:
            printf("Number is +ve");
            break;
            
        case 0:
            switch (user == 0){
                case 1:
                    printf("Number is 0");
                    break;
                case 0:
                    printf("Number is -ve");
                    break;
            }
        
    }
    
    
}
