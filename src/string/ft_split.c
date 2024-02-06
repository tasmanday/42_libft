/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tday <tday@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:07:23 by tday              #+#    #+#             */
/*   Updated: 2024/01/26 09:33:32 by tday             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"

/*
	Summary
	allocates memory and returning a substring from the input_str based on
	the delimeter character.

	Inputs
	input_str = The original string from which the substring is extracted.
	delimeter = The character used as a delimiter to split the string.
	i = A pointer to an integer that keeps track of the current position in
	the input_str.

	Outputs
	word = the substring extracted from the input string.
*/
static char	*allocate_word(const char *input_str, char delimeter, int *i)
{
	char	*word;
	int		j;
	int		k;

	j = 0;
	while ((input_str[*i + j] != '\0') && (input_str[*i + j] != delimeter))
	{
		j++;
	}
	word = (char *) malloc((j + 1) * sizeof(char));
	if (!word)
		return (error("ft_split allocate_word malloc error"), NULL);
	k = 0;
	while ((input_str[*i] != '\0') && (input_str[*i] != delimeter))
	{
		word[k] = input_str[*i];
		k++;
		(*i)++;
	}
	word[k] = '\0';
	return (word);
}

/*
	Summary
	counts the number of words in a given string, based on a specified
	delimiter character.

	Inputs
	input_str = The original string to count the words from.
	delimiter = The character used as a delimiter to separate the words.

	Outputs
	count = the number of words in the input string.
*/
static int	count_words(const char *input_str, char delimeter)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (input_str[i] != '\0')
	{
		while (input_str[i] == delimeter && input_str[i] != '\0')
			i++;
		if (input_str[i] != delimeter && input_str[i] != '\0')
		{
			count++;
			while (input_str[i] != delimeter && input_str[i] != '\0')
				i++;
		}
	}
	return (count);
}

/*
	Summary
	frees the memory allocated for the array of substrings.

	Inputs
	result = A double pointer to the array of substrings.
	j = An integer representing the index of the last substring in the array.

	Outputs
	none.
*/
static void	free_allocated(char **result, int j)
{
	while (j >= 0)
	{
		free (result[j]);
		j--;
	}
	free (result);
}

/*
	Summary
	allocates memory and returns an array of substrings obtained by splitting
	the original using the character ’delimeter’ as a delimiter.
	the array must end with a NULL pointer.

	Inputs
	input_str = original string.
	delimeter = delimiter character used to split the string.

	Outputs
	result = array of substrings.
*/
char	**ft_split(const char *input_str, char delimeter)
{
	char	**result;
	int		i;
	int		j;
	int		word_count;

	i = 0;
	j = 0;
	word_count = count_words(input_str, delimeter);
	result = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (error("ft_split malloc error"), NULL);
	while (input_str[i] != '\0' && j < word_count)
	{
		while (input_str[i] == delimeter)
			i++;
		result[j] = allocate_word(input_str, delimeter, &i);
		if (!result[j])
		{
			free_allocated(result, j);
			return (NULL);
		}
		j++;
	}
	result[j] = NULL;
	return (result);
}
