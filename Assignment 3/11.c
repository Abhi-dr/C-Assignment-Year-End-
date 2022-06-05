#include <stdio.h>

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    if (number % 5 == 0 && number % 11 == 0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    
}
