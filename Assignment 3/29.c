#include <stdio.h>


int main()
{
    int data[9] = {10,2,3,4,5,6,7,8,9};
    int small, large;
    small = large = data[0];
    
    for (int i = 1; i < 9; i++){
        
        if (data[i] < small){
            small = data[i];
        }
        
        if (data[i] > large){
            large = data[i];
        }
    }
    
    printf("Smallest -> %d\nLargest -> %d", small, large);
       
}
