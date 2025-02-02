/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:58:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 20:20:33 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	litlen;
	size_t	i;

	i = 0;
	litlen = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (litlen > len)
		return (NULL);
	while (i <= len - litlen)
	{
		i++;
		if (big[i] == little[0])
			if (ft_strncmp (&big[i], little, litlen) == 0)
				return ((char *)&big[i]);
	}
	return (NULL);
}
/*
int main ()
{
    const char *largestring = "odio 42!";
    const char *smallstring = "42!";
    size_t limit = 12;

    char *result = ft_strnstr(largestring, smallstring, limit);

    if (result != NULL)
        printf("encontrado %s", smallstring);
    
    else
        printf ("no enccontrado :(");


}*/