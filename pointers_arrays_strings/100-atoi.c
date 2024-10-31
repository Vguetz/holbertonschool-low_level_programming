#include "main.h"
#include <stdio.h>
#include <limits.h>
/**
 * _atoi - function that converts a string to number
 * @s: parameter
 * Return: num
 *
 *
 */

int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int digit_in_string = 0;
	int digit;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			digit_in_string = 1;
			digit = *s - '0';
			if (num > (INT_MAX - digit) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			num = num * 10 + digit;
		} else if (*s == '-')
		{
			if (!digit_in_string)
			{
				sign *= -1;
			}
		} else if (digit_in_string)
		{
			break;
		}
		s++;
	}
	return (digit_in_string ? sign * num : 0);
}

