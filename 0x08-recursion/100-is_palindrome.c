#include "main.h"

int _strlen(char *s);
int test_palindrome(char *s, int l, int r);
int is_palindrome(char *s);

/**
  * _strlen - gets length of string
  *
  * @s: string
  * Return: length of stringb
  */
int _strlen(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l++;
		l += _strlen(s + l);
	}
	return (l);
}

/**
  * test_palindrome - returns 1 if a string is a palindrome and 0 if not
  *
  * @s: string
  * @tail: index at tail of string
  * @head: index at head of string
  * Return: 1 if palindrome and 0 if not
  */
int test_palindrome(char *s, int tail, int head)
{
	/*
	 * test that all elements at head and tail have been equal
	 */
	if ((s + head) > (s + tail))
		return (1);
	/*tests sameness of elements at head andtaili*/
	if (*(s + head) != *(s + tail))
		return (0);
	/*decreases tail and increases head*/
	return (test_palindrome(s, tail - 1, head + 1));
}

/**
  * is_palindrome - checks if string is palindrome or not
  * @s: a given string
  * Return: 1 if palindrome and 0 if not
  */
int is_palindrome(char *s)
{
	int i = 0;
	int l = _strlen(s);

	/*empty string is a palindrome*/
	if (!(*s))
		return (1);

	return (test_palindrome(s, l - 1, i));
}
