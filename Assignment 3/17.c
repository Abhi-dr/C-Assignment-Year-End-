#include <stdio.h>

void table (int number)
{

  for (int i = 1; i < 11; i++)
    {
      printf ("%d X %d = %d\n", number, i, number * i);
    }

}


int main ()
{

  int number;
  printf ("Enter a number: ");
  scanf ("%d", &number);

  table (number);


}
