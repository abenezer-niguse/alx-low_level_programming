#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - main function
 * check last with n
 * return 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
		printf("last digit of %i is %i and is greater than 5\n", n);
	else if (n == 0)
		printf("last digit of %i is %i and is 0\n", n);
	else if (n < 6)
		printf("last digit of %i is %i and is less than 6 and 0\n", n);

	return (0);
}
