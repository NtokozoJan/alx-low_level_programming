#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words from.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}

	return (count);
}

/**
 * allocate_words - Allocates memory for the words array.
 * @wc: The word count.
 *
 * Return: The allocated words array, or NULL on failure.
 */
char **allocate_words(int wc)
{
	char **words = malloc((wc + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	return (words);
}

/**
 * extract_word - Extracts a single word from the input string.
 * @str: The input string.
 * @words: The words array.
 * @i: The index of the current word.
 *
 * Return: 0 on success, -1 on failure
 */
int extract_word(char *str, char **words, int i)
{
	int len = 0;
	int k;

	while (*str == ' ')
		str++;

	while (str[len] != ' ' && str[len] != '\0')
		len++;

	words[i] = malloc((len + 1) * sizeof(char));
	if (words[i] == NULL)
		return (-1);

	for (k = 0; k < len; k++)
		words[i][k] = str[k];
	words[i][k] = '\0';

	return (0);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	int i, j;
	int wc = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = allocate_words(wc);
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		if (extract_word(str, words, i) == -1)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		str += strlen(words[i]);
	}

	words[wc] = NULL;

	return (words);
}
