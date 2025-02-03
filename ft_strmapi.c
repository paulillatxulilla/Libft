/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:32:11 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/03 16:00:20 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	unsigned int	i;
	char			*result;

	result = (char *)malloc(len + 1);
	i = 0;
	len = ft_strlen(s);
	if (s == NULL || f == NULL)
		return (NULL);
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		i++;
		result[i] = f(i, s[i]);
	}
	result[len] = '\0';
	return (result);
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