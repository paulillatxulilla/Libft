/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:32:11 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:46:47 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    if(s == NULL || f == NULL)
        return NULL;

    size_t len = ft_strlen(s);
    char *result = (char *)malloc(len + 1);
    
    if(result == NULL)
        return NULL;
    
    unsigned int i = 0;
    
    while (i < len)
    {
        i++;
        result[i] = f(i, s[i]);
    }
    
    result[len] = '\0';
    return result;
}

/*
int main() 
{
    char str[] = "hello world";
    char *result = ft_strmapi(str,);

    if (result) {
        printf("Resultado: %s\n", result);  // Debería imprimir "HELLO WORLD"
        free(result);  // Liberamos la memoria asignada por malloc
    } else {
        printf("Error en la asignación de memoria\n");
    }

    return 0;
}*/