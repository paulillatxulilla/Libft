/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:58:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:33:47 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			litlen;
	size_t			i;

	litlen = ft_strlen(little);
	ft_strlen(big);
	if (!big || !little)
		return (NULL);
	if (*little == '\0')
		return ((char *)big);
	if (litlen > len)
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
    // const char *largestring = "lorem ipsum dolor sit amet";
    // const char *smallstring = "lorem";
    size_t limit = 15;

    char *result = ft_strnstr(((void*)0), "fake", 3);

    if (result != NULL)
        printf("encontrado %s", smallstring);
    
    else
        printf ("no enccontrado :(");
} */