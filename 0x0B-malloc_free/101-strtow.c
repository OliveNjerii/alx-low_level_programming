#include "main.h"
#include <stdlib.h>

int count_words(char *str);
int word_length(char *str);
void free_words(char **words, int count);

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, word_count, word_len, index;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	index = 0;
	for (i = 0; i < word_count; i++)
	{
		while (*str == ' ')
			str++;

		word_len = word_length(str);
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}

		for (j = 0, k = 0; j < word_len; j++, k++)
		{
			words[i][k] = str[j];
		}
		words[i][k] = '\0';
		str += word_len;
		index++;
	}

	words[index] = NULL;

	return (words);
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * word_length - Computes the length of a word.
 * @str: The string containing the word.
 *
 * Return: The length of the word.
 */
int word_length(char *str)
{
	int length = 0;

	while (str[length] != ' ' && str[length] != '\0')
		length++;

	return (length);
}

/**
 * free_words - Frees the memory allocated for the words.
 * @words: The array of words.
 * @count: The number of words in the array.
 */
void free_words(char **words, int count)
{
	int i;

	for (i = 0; i < count; i++)
		free(words[i]);

	free(words);
}

