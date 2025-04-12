/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:55:07 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:33:34 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	slen;
	size_t	sublen;

	if (s == NULL)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		sublen = slen - start;
	else
		sublen = len;
	subs = (char *)malloc(sublen + 1);
	if (subs == NULL)
		return (NULL);
	ft_strncpy(subs, &s[start], sublen);
	subs[sublen] = '\0';
	return (subs);
}
/*
int main ()
{
    char *s = "Hola, mundo!";
    char *func;

    func = ft_substr(s, 7, 5);
    if (func != NULL) 
    {
        printf("Subcadena: %s\n", func);
        free(func);
    } 
    else
        printf("Error al crear la subcadena\n");
    return 0;

}*/