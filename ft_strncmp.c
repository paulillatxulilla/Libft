/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:31:51 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 20:17:21 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && *s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
/*
int main ()
  {
    const char *s1 = "holabdffgffd";
    const char *s2 = "hota";
    size_t n = 3;
    int r = ft_strncmp(s1, s2, n);

    if (r == 0)
     printf ("somos iguales %d", r);

    if (r < 0)
        printf ("soy menor %d", r);

    if (r > 0)
     printf ("soy mayor %d", r);

  return (0);
  }*/