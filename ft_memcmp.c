/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:39:39 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/04 19:23:24 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*c1;
	const unsigned char	*c2;
	size_t				i;

	i = 0;
	c1 = (const unsigned char *)s1;
	c2 = (const unsigned char *)s2;
	while (i < n && (*c1 == *c2))
	{
		c1++;
		c2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*c1 - (unsigned char)*c2);
}
/*
int main ()
  {
    const char *s1 = "holabdffgffd";
    const char *s2 = "hota";
    size_t n = 5;
    int r = ft_memcmp(s1, s2, n);

    if (r == 0)
     printf ("somos iguales %d", r);

    if (r < 0)
        printf ("soy menor %d", r);

    if (r > 0)
     printf ("soy mayor %d", r);

  return (0);
  }
  */
