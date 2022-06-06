#include <stdio.h>


int main()
{
    int data[3][4] = {2,1,4,3,5,2,7,1,3,1,4,2};
    int data2[4][2] = {1,2,3,4,2,5,6,2};
    
    int data3[3][2] = {0};
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            
            for (int k = 0; k < 4; k++){
                data3[i][j] += data[i][k] * data2[k][j];
            }
            
        }
    }
    
    printf("After Multiplication: \n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            printf("%d ", data3[i][j]);
        }
        printf("\n");
    }
}
