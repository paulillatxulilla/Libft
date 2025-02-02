/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 16:58:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:47:06 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
     if (*little == '\0')
        return (char *)big;
    
    size_t litlen = ft_strlen(little);

    if (litlen > len)
      return NULL;

    size_t i = 0;

    while (i <= len - litlen)
    {
        i++;
        if(big[i] == little[0])
            if (ft_strncmp (&big[i], little, litlen) == 0)
                return (char *)&big[i];
    }

    return NULL;
}
/*
int main ()
{
    const char *largestring = "odio 42!";
    const char *smallstring = "42!";
    size_t limit = 12;

    char *result = ft_strnstr(largestring, smallstring, limit);

    if (result != NULL)
        printf("encontrado %s", smallstring);
    
    else
        printf ("no enccontrado :(");


}*/