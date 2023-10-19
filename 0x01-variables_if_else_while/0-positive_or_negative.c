#include <stdlib.h>
#include <time.h>
/**
 * Main - entry point
 *
 * Description: false or true validation
 *
 * Return:0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printif("%i is positive\n");
	else if (n == 0)
	printif("%i is positive\n");
	else
	printif("%i is negative\n");

	return (0);
}
