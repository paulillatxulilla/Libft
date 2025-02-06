/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:16:55 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 19:34:12 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	count_digits(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		len = 1;
	else if (n < 0)
	{
		len = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_str(char *str, int n, int len)
{
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n = n / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
	{
		str = (char *)malloc(12);
		if (!str)
			return (NULL);
		ft_strlcpy(str, "-2147483648", 12);
		return (str);
	}
	len = count_digits(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	fill_str(str, n, len);
	str[len] = '\0';
	return (str);
}
/*
int main()
{
    int number = -123;  
    char *result = ft_itoa(number);

    if (result != NULL) 
    {
        printf("El número como cadena es: %s\n", result);
        free(result);  
    } 
    else 
        printf("Error al asignar memoria.\n");
    return 0;
}*/