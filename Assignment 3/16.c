#include <stdio.h>

int main ()
{

  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  
  int result = number > 0;
  
  switch (result) {
      
      case 1: printf("Even");
      break;
      
      case 0: printf("Odd");
      break;
  }


}
