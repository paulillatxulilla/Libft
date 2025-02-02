/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 12:41:18 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 21:09:36 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len1;
	size_t	len2;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	s3 = (char *)malloc (len1 + len2 + 1);
	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	ft_strlcpy(s3, s1, len1);
	ft_strlcat (s3, s2, len2);
	return (s3);
}
/*
int main() 
{
    char *s1 = "Hola, ";
    char *s2 = "mundo!";
    
    char *func = ft_strjoin(s1, s2);
    
    if (func != NULL) 
    {
        printf("%s\n", func); 
        free(func);
    } 
    else 
        printf("Error al reservar memoria.\n");
    
    return 0;
}
*/