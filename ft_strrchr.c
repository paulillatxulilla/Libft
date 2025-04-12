/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 13:18:12 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:33:42 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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