#include "main.h"

/**
 * str_checker - Entry point
 *
 * Description: Write a function that compares two strings and returns
 * 1 if the strings can be considered identical, otherwise return 0.
 *
 * Prototype: int wildcmp(char *s1, char *s2);
 * s2 can contain the special character *.
 * The special char * can replace any string (including an empty string)
 *
 * @s1: string_1 base address.
 * @s2: string_2 base address.
 * @i: left index.
 * @j: special index. (joker)
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int str_checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (str_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (str_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (str_checker(s1, s2, i + 1, j) || str_checker(s1, s2, i, j + 1));
	return (0);
}

/**
 * wildcmp - check if strings could be considered identical
 * @s1: base address for string.
 * @s2: base address for string.
 *
 * Return: 1 if are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (str_checker(s1, s2, 0, 0));
}
