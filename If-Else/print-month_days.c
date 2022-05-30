  #include <stdio.h>

int main()
{
    
    int user;
    
    printf("Enter the month number: ");
    scanf("%d", &user);
    
    if (user == 1 || user == 3 || user == 5 || user == 7 || user == 8 || user == 10 || user == 12){
        printf("31 Days");
    } 
    
    else if (user == 2){
        printf("28 Days");
    }
    
    else if (user == 4 || user == 6 || user == 9 || user == 11){
        printf("30 Days");
    }
    
    else{
        printf("Invalid");
    }
    
    
}
