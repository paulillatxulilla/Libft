/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:18:12 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 20:15:32 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*st;
	char	cc;
	char	*i;

	st = (char *)s;
	cc = (char) c;
	i = 0;
	while (*st != '\0')
	{
		if (*st == cc)
			i = st;
		st++;
	}
	if (cc == '\0')
		return (st);
	return (i);
}
/*
int main (void)
{
    const char *src = "camila es mala en ajedrez";
    int c = 'k';
    char *result = ft_strrchr(src, c);

    if (result != NULL)
        printf("%c encontrado", c);
    else
         printf("%c no encontrado :(", c);
    
    return(0);
}*/