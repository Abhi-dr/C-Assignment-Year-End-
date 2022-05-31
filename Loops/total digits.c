#include <stdio.h>

int main()
{

    int user, total=0;
    printf("Enter a number: ");
    scanf("%d", &user);
    
    while (user > 0 || user != 0){
        total += 1;
        user /= 10;
    }
    
    printf("%d", total);

 
}
