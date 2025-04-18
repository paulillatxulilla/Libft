/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:45:30 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:35:49 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char		*box;
	unsigned char			*box2;

	box = (const unsigned char *)src;
	box2 = (unsigned char *) dest;
	if (box2 > box && box < box2 + n)
	{
		while (n > 0)
		{
			n--;
			box2[n] = box[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
/*
int main(void)
{
    char buffer[20] = "Hello, world!";

    // Ejemplo sin solapamiento
    ft_memmove(buffer + 7, buffer, 6); // Copiamos "Hello," a la posición 7
    printf("Resultado sin solapamiento: %s\n", buffer);

    // Reiniciamos el buffer
    strcpy(buffer, "Hello, world!");

    // Ejemplo con solapamiento
    ft_memmove(buffer + 3, buffer, 6); // Copiamos "Hello," a la posición 3
    printf("Resultado con solapamiento: %s\n", buffer);

    return(0);
}*/
