#include <stdio.h>

int linear_search(int data[], int n, int item){
    int index = 0;
    for (int i = 0; i < 9; i++){
        if (data[i] == item){
            return index;
        }
        
        else{
            index++;
        }
    }
    
    return -1;
    
}


int main()
{
    int data[9] = {1,2,3,4,5,6,7,8,9};
    
    int item = 41;
    
    int result = linear_search(data, 9, item);
    
    if (result == -1){
        printf("Item Not found!...");
    }
    
    else{
        printf("Item FOUND at %dth index...", result);
    }
    

}
