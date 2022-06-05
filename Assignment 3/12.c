#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the character: ");
    scanf("%c", &letter);
    
    if ((letter >= 65 && letter <= 91) || (letter >= 97 && letter <= 122)){
        printf("Alphabet");
    }
    
    else if (letter >= 48 && letter <= 57){
        printf("Digit");
    }
    
    else{
        printf("Special Character");
    }
    
}
