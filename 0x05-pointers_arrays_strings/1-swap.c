#include "main.h"
<<<<<<< HEAD
/**
 * swap_int - swap variable values
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
*/

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
=======

/**
 * swap_int - swap two number
 * Return:0
 * @a : is variable
 * @b : variable
 */

void swap_int(int *a, int *b)
{
	int var = *a;
	*a = *b;
	*b = var;

>>>>>>> c70681029f1c12142a8ed8316d34628ff673a002
}
