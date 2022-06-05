#include <stdio.h>

int main()
{
    char letter;
    printf("Enter the character: ");
    scanf("%c", &letter);
    
    if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <=122)){
        printf("YES");
    }
    
    else{
        printf("NO");
    }
    
}
