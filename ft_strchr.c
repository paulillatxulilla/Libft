/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:40:32 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:36:12 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*st;
	char	cc;

	cc = (char) c;
	st = (char *)s;
	while (*st != '\0')
	{
		if (*st == cc)
			return (st);
		st++;
	}
	if (cc == '\0')
		return (st);
	return (NULL);
}
/*
int main (void)
{
    const char *src = "camila es mala en ajedrez";
    int c = 'k';
    char *result = ft_strchr(src, c);

    if (result != NULL)
        printf("%c encontrado", c);
    else
         printf("%c no encontrado :(", c);
    
    return(0);
}*/
