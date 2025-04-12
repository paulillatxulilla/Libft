/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:45:30 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:35:56 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char		*box;
	unsigned char			*box2;
	size_t					i;

	i = 0;
	box = (const unsigned char *)src;
	box2 = (unsigned char *) dest;
	if (box2 == NULL && box == NULL)
		return (NULL);
	while (i < n)
	{
		box2[i] = box[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
    char arr[] = "abcdefghi";
    char arrc[7];
    ft_memcpy(arrc, arr, 5);
    printf("string copiada: %s\n", arrc);
    return(0);
}*/
