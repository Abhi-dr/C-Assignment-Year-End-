#include <stdio.h>

void is_arm(int num){
    int total = 0;
    int copy = num;
    
    while (num > 0){
        int last = num % 10;
        
        total += last * last * last;
        
        num /= 10;
    }
    if (total == copy){
        printf("%d ", copy);
    }
    
}


int main()
{
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
    
    for (int i = 1; i <= number; i++){
        is_arm(i);
    }
    
    
}
