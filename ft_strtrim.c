/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:17:17 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 18:55:59 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

static int	ft_isinset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static char	*ft_strncpy(char *dest, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (i < dsize && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < dsize)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[start] && ft_isinset(s1[start], set))
		start++;
	while (end > start && ft_isinset((s1[end - 1]), set))
		end--;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	if (result == NULL)
		return (NULL);
	ft_strncpy(result, s1 + start, end - start);
	result[end - start] = '\0';
	return (result);
}
/*
int main()
{
    char const *s1 = "???caracola_-_";
    char const *set = "?-_";
    char *func;

    func = ft_strtrim(s1, set);
    if(func != NULL)
    {
        printf("string recortada: %s\n", func);
        free(func);
    }
    else
    printf("error al reservar memoria");

    return(0);
}*/