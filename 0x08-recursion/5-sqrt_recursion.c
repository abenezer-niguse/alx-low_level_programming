#include "main.h"
/**
 * helperFunction - check the sqr
 * @num: number
 * @pSqrt: sqrt of number
 */
int helperFunction(int num, int pSqrt)
{
	if ((pSqrt * pSqrt) == num)
	{
		return (pSqrt);
	}
	else
	{
		if ((pSqrt * pSqrt) > num)
			return (-1);
		else
			return (helperFunction(num, pSqrt + 1));
	}
}
/**
 * sqrt_recursion - returns the natural sqrt root num
 * @n: number to finde of n
 * Return: sqrt of n
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperFunction(n, 0));
}
