#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void factorize(long long n);

/**
 * factorize - prints the two smallest factors of a given number.
 * @n: represents the number to be factorized.
 */
void factorize(long long n)
{
	/* declare two variables to store the factors */
	long long p, q;
  
	/* find the smallest factor of n */
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{

			/* assign the factor to p and the quotient to q */
			p = i;
			q = n / i;
			/* check if p is larger than q and swap them if needed */
			if (p > q)
			{
				long long temp = p;
				p = q;
				q = temp;
			}
		/* print the result and return */
		printf("%lld=%lld*%lld\n", n, p, q);
		return;
		}
	}
	/* if n is prime, print n and 1 as the factors */
	printf("%lld=%lld*%d\n", n, n, 1);
}

/**
 * main - main func
 * @argc: argc
 * @argv: argv
 * Return: return.
 */

int main(int argc, char **argv)
{
	/* check if a file name is given as argument */
	if (argc != 2)
	{
		printf("Usage: factors <file>\n");
		exit(1);
	}

	/* open the file and read the numbers */
	FILE *f = fopen(argv[1], "r");
	if (f == NULL)
	{
		printf("Error: cannot open file %s\n", argv[1]);
		exit(2);
	}

	/* declare a variable to store each number */
	long long number;
	/* loop through the file and read each number */
	while (fscanf(f, "%lld", &number) == 1)
	{
		/* factorize the number and print the result */
		factorize(number);
	}

	/* close the file and exit */
	fclose(f);
	return (0);
}
