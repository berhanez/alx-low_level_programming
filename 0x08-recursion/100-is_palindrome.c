#include "main.h"

int palindrome_checker(char *s, int len, int i);
/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: 1 if palindrome, else 0
 */
int is_palindrome(char *s)
{
	int i = 0, len;

	len = _strlen_recursion(s);
	if (*s == '\0')
		return (1);
	return (palindrome_checker(s, len, i));
}
/**
 * _strlen_recursion - gets length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
/**
 * palindrome_checker - checks if palindrome
 * @s: string
 * @len: length
 * @i: index of string
 * Return: 1 if palindrome, else 0
 */
int palindrome_checker(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);
	if (s[i] == s[len - i - 1])
		return (palindrome_checker(s, len, ++i));
	return (0);
}
