#include "main.h"

int is_prime_helper(int n, int divisor);

/**
 * is_prime_number - Checks if the input integer is a prime number.
 * @n: The integer to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function for is_prime_number.
 * @n: The integer to be checked.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_prime_helper(int n, int divisor)
{
	if (divisor == n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_helper(n, divisor + 1));
}
