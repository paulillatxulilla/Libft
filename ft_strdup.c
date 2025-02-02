/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:32:57 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:39:28 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strdup(const char *s)
{
    
    size_t len = strlen(s) + 1; // Incluye el carácter nulo.

    char *dest = (char *)malloc(len);
    
    if (dest == NULL) 
        return NULL; // Manejo de error en caso de fallo de malloc
        
    memcpy(dest, s, len); // Copia la cadena incluyendo el carácter nulo
    return dest;
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