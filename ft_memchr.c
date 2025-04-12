/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:18:57 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:36:03 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char			cc;
	const unsigned char		*ss;
	size_t					i;

	i = 0;
	cc = (unsigned char) c;
	ss = (const unsigned char *) s;
	while (i < n)
	{
		if (ss[i] == cc)
			return ((void *)(ss + i));
		i++;
	}
	return (NULL);
}

int main ()
{
    const void *s = "bonjour";
    int c = 'j';
    size_t n = 4;
    void *result = ft_memchr(s, c, n);

    if (result != NULL)
        printf("este es mi caracter %c", c);
    
    else
        printf("no encontrado :(");
    return (0);
}
