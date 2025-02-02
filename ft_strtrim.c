/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:17:17 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 16:34:35 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

static int ft_isinset(char c, const char *set) //verifica que un char está en set, es static int pq solo tiene alcance dentro de este archivo
{   
    while (*set)
    {
        if (c == *set)
            return (1);
        set++;
    }
    return (0);
}

static char *ft_strncpy(char *dest, const char *src, size_t dsize) //copia src de tamaño dsize en dest
{
    size_t i;

    i = 0;
    while (i < dsize && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < dsize)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

char *ft_strtrim(char const *s1, char const *set) //elimina los caracteres de set en s1
{
    size_t start;
    size_t end;
    char *result;
    
    start = 0;
    end = strlen(s1);

    if( s1 == NULL || set == NULL)
        return NULL;

    while(s1[start] && ft_isinset(s1[start], set)) //mira desde el principio y busca caracteres de set
        start++;
    while(end > start && ft_isinset((s1[end - 1]), set)) //mira desde el final y busca chars de set
        end--;
    result = (char *)malloc(sizeof(char) * (end - start + 1)); //hacemos hueco para el string sin los chars de set
    if (result == NULL)
        return NULL;
    ft_strncpy(result, s1 + start, end - start); //copiamos string limpio
    result[end - start] = '\0'; //nulo al final
    return result;
}

int main()
{
    char const *s1 = "???caracola_-_";
    char const *set = "?-_";
    char *func;

    func = ft_strtrim(s1, set);
    if(func != NULL)
    {
        printf("string recortada: %s\n", func);
        free(func);
    }
    else
    printf("error al reservar memoria");

    return(0);
}

