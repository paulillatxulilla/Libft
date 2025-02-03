/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:32:57 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/03 17:37:28 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*dest;

	dest = (char *)malloc;
	len = ft_strlen(s) + 1;
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, len);
	return (dest);
}
/*
int main(void) 

{
    const char *original = "Hola, mundo!";
    char *copia = ft_strdup(original);
    
    if (copia != NULL) 
    {
        printf("Copia: %s\n", copia);
        free(copia); // Liberar la memoria asignada
    } 
    else 
        printf("Error");
    
    return 0;
}*/