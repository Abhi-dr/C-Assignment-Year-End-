#include <stdio.h>

int main()
{

    int user, total=0;
    printf("Enter a number: ");
    scanf("%d", &user);
    
    for (int i = 0; i <= user; i++){
        total += i;
    }
   
   printf("Total = %d", total);
}
