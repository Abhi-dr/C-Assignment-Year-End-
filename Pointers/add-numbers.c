#include <stdio.h>

int main()
{
    
    int a, b;
    int *ptr1, *ptr2;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    
    int sum = *ptr1 + *ptr2;
    printf("%d", sum);
    
}
