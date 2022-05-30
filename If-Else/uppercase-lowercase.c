#include <stdio.h>

int main()
{
    char user;
    
    printf("Enter the character: ");
    
    scanf("%c", &user);
    
    if (user >= 65 && user <= 91){
        printf("Uppercase");
    }
    
    else{
        printf("Lowercase");
    }
}
