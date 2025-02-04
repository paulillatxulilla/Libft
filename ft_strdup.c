/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:32:57 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/04 18:10:30 by padan-pe         ###   ########.fr       */
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

	len = ft_strlen(s) + 1;
	dest = (char *)malloc(len);
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