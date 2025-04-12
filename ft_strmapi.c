/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:32:11 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:33:53 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*result;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
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