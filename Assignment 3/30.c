#include <stdio.h>

int sum(int data[9]){
    
    int total = 0;
    
    for (int i = 0; i < 9; i++){
        total += data[i];
    }
    
    return total;
}


int main()
{
    int data[9] = {1,2,3,4,5};
    
    printf("Total -> %d", sum(data));
    
}
