/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:58:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/04 20:06:29 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			litlen;
	size_t			i;

	litlen = ft_strlen(little);
	if (len < 0)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	if (litlen > len || big == NULL)
		return (NULL);
	i = 0;
	while (big[i] && i <= len - litlen)
	{
		if (big[i] == little[0])
			if (ft_strncmp (&big[i], little, litlen) == 0)
				return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
/*
int main ()
{
    const char *largestring = "lorem ipsum dolor sit amet";
    const char *smallstring = "lorem";
    size_t limit = 15;

    char *result = ft_strnstr(largestring, smallstring, limit);

    if (result != NULL)
        printf("encontrado %s", smallstring);
    
    else
        printf ("no enccontrado :(");


}*/