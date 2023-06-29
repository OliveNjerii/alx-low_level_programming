/**
 * cap_string - capitalizes all words of a string
 * @str: input string
 * Return: pointer to the resulting string
 */
char *cap_string(char *str)
{
	int i = 0;

	/* Capitalize the first letter */
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	/* Capitalize subsequent letters after separators */
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' ||
		    str[i] == '}')
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		else
		{
			i++;
		}
	}

	return (str);
}

