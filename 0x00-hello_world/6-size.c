#include <stdio.h>

int main(void)
{
char c;
int i;
long int li;
long long int lli;
float f;

printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %i byte(s)\n", (unsigned long)sizeof(i));
printf("Size of a long int: %li byte(s)\n", (unsigned long)sizeof(li));
printf("Size of a long long int: %lli bite(s)\n", (unsigned long)sizeof(lli));
printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
