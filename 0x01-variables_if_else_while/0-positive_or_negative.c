#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n==0){printf("0 is zero")};
	else if (n> 0)printf("%d is positive");
	else
	  printf("%d is negative");
	return (0);
}
