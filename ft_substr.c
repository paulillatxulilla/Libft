/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:55:07 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:38:37 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len) //Reserva  y devuelve una substring. La substring empieza desde el índice ’start’ y tiene una longitud máxima ’len’.
{
    char *subs;
    size_t slen;
    size_t sublen;

    slen = strlen(s);
    if (s == NULL) 
        return (NULL);
    if (subs == NULL)
        return (NULL);
    if (start >= slen)
        return ("");
    if (len > slen - start) //si cuanto queremos copiar es mayor de lo que podemos
        sublen = slen - start;
    else
        sublen = len;
    
    subs = (char *)malloc(sublen + 1);
    strncpy(subs, &s[start], sublen);
    subs[sublen] = '\0';
    return (subs); 
}
/*
int main ()
{
    char *s = "Hola, mundo!";
    char *func;

    func = ft_substr(s, 7, 5);
    if (func != NULL) 
    {
        printf("Subcadena: %s\n", func);
        free(func);
    } 
    else
        printf("Error al crear la subcadena\n");
    return 0;

}*/