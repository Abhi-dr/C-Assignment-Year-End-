#include <stdio.h>

int main()
{
    int frequencies[10] = {0,0,0,0,0,0,0,0,0};
    int lastDigit;
    long long int user;
    
    printf("Enter the number: ");
    scanf("%lld", &user);
    
    while(user > 0)
    {
        lastDigit = user % 10;

        user /= 10;

        frequencies[lastDigit]++;
    }
    
    for (int i = 0; i< 10; i++){
        printf("%d -> %d\n", i, frequencies[i]);
    }
    
    
    
}
