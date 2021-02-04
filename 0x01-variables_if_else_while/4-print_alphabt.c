#include <stdio.h>

/**
 * main - print alphabet lowercase without e, q
 * Return: 0
 */

int main(void)
{
  char alphabet;

  for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
    {
      if (alphabet != 101)
	{
	  if (alphabet != 113)
	    {
	      putchar(alphabet);
	    }
	}
    }
  putchar('\n');
  return (0);
}
