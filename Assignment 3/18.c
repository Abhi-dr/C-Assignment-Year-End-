#include <stdio.h>

int palindrome(int number){
    int copy = number;
    int reverse = 0;
    int last_num;
    
    while (number > 0){
        last_num = number % 10;
        reverse = reverse * 10 + last_num;
        number /= 10;
        
    }
    
    
    return copy == reverse;
}

int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    switch (palindrome(number)){
        case 0: printf("NO");
        break;
        
        case 1: printf("YES");
        break;
    }
}
