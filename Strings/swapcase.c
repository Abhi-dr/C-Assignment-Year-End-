#include <stdio.h>

int main (){
   char data[] = "Hello This Is A Simple String";
   
//   printf("Enter the text: ");
//   fgets(data, 5, stdin);
   
   for (int i = 0; data[i]; i++){
      if (data[i] >=65 && data[i] <= 91){
          printf("%c", data[i] + 32);
      }
      
      else if (data[i] >=97 && data[i] <= 122){
          printf("%c", data[i] - 32);
      }
      
      else{
        continue;
      }
    
    
    
   }

}
