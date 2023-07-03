/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to search.
 * @accept: The string of accepted characters.
 *
 * Return: The number of bytes in the initial segment of s consisting
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int match;

	while (*s)
	{
		match = 0;

		while (*accept)
		{
			if (*s == *accept)
			{
				match = 1;
				break;
			}
			accept++;
		}

		if (match == 0)
			break;

		length++;
		s++;
		accept = accept - length + 1;
	}

	return (length);
}

