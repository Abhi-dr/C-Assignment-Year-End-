#include <stdio.h>

int main (){
   int total = 0;
   char data[] = "hello this is a simple string";
   
//   printf("Enter the text: ");
//   fgets(data, 5, stdin);
   
   for (int i = 0; data[i]; i++){
       total += 1;
   }
   
   printf("Total = %d", total);

}
