#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - fetch last digit of n
 * Return: 0
 */
/* betty style doc for function main goes there */
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  /* your code goes there */
  int lastdigit;
  lastdigit = n % 10;
  if (lastdigit > 5)
    {
      printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
    }
  else if (lastdigit == 0)
	{
	  printf("Last digit of %d is %d and is 0\n", n, lastdigit);
	}
      else
	{
	  printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
  return (0);
}
