/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:13:56 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 17:55:05 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:31:26 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/02 17:53:00 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count_words(const char *s, char c)
{
    int count;
    int in_word;

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
    return count;
}

char *allocate_word(const char *s, int start, int len)
{
    char *word = malloc(len + 1);
    if (!word)
        return NULL;
    strncpy(word, s + start, len);
    word[len] = '\0';
    return word;
}

char **ft_split(const char *s, char c)
{
    int i;
    int start;
    int idx;
    int in_word;

    i = 0;
    start = 0;
    idx = 0;
    in_word = 0;
    char **result = malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!result)
        return NULL;
    while (s[i]){
        if (s[i] != c && !in_word){
            start = i;
            in_word = 1;
        }
        if ((s[i] == c || s[i + 1] == '\0') && in_word){
            result[idx++] = allocate_word(s, start, i - start + (s[i] != c));
            in_word = 0;
        }
        i++;
    }
    result[idx] = NULL;
    return result;
}

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
}