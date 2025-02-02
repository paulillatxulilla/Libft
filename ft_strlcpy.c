/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:45:30 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 20:10:17 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	slen;

	slen = 0;
	if (size > 0)
	{
		while (src[slen] != '\0' && slen < (size - 1))
		{
			dest[slen] = src[slen];
			slen++;
		}
		dest[slen] = '\0';
	}
	return (ft_strlen(src));
}
/*
int main(void)
{
    char arr[] = "esto no es un array";
    char arrc[7];
    ft_strlcpy(arrc, arr, 5);
    printf("string copiada: %s\n", arrc);
    return(0);
}*/