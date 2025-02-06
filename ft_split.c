/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:13:56 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 18:54:31 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*allocate_word(const char *s, int start, int len)
{
	char	*word;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, s + start, len + 1);
	word[len] = '\0';
	return (word);
}

static char	**process_words(const char *s, char c, char **result)
{
	int	i;
	int	start;
	int	idx;
	int	in_word;

	i = 0;
	start = 0;
	idx = 0;
	in_word = 0;
	while (s[i])
	{
		if (s[i] != c && !in_word)
		{
			start = i;
			in_word = 1;
		}
		if ((s[i] == c || s[i + 1] == '\0') && in_word)
		{
			result[idx++] = allocate_word(s, start, i - start + (s[i] != c));
			in_word = 0;
		}
		i++;
	}
	result[idx] = NULL;
	return (result);
}

char	**ft_split(const char *s, char c)
{
	char	**result;

	result = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	return (process_words(s, c, result));
}
/*
int main()
{
    char **result = ft_split("hola,cara,cola", ',');
    if (!result)
    {
        printf("Error al asignar memoria\n");
        return 1;
    }
    for (int i = 0; result[i]; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);  // Se libera cada palabra
    }
    free(result);  // Se libera el array de punteros
    return 0;
}*/