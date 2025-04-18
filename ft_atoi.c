/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:10:09 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:41:35 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == ' ')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char	*str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

/* #include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str1[] = "1234567890128762";
    char str2[] = "42";
    char str3[] = "  +987";
    char str4[] = "abc123";
    char str5[] = "123abc";

    printf("Cadena: '%s', Entero: %d\n", str1, atoi(str1));
    printf("Cadena: '%s', Entero: %d\n", str2, ft_atoi(str2));
    printf("Cadena: '%s', Entero: %d\n", str3, ft_atoi(str3));
    printf("Cadena: '%s', Entero: %d\n", str4, ft_atoi(str4));
    printf("Cadena: '%s', Entero: %d\n", str5, ft_atoi(str5)); 

    return 0;
} */
