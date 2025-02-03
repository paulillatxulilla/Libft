/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:10:09 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/03 18:17:48 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	result;
	int	sign;

	sign = 1;
	result = 0;
	if (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v')
		str++;
	if (*str == '\r' || *str == '\f')
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
/*
int main() 
{
    char str1[] = "   -12345";
    char str2[] = "42";
    char str3[] = "  +987";
    char str4[] = "abc123";
    char str5[] = "123abc";

    printf("Cadena: '%s', Entero: %d\n", str1, ft_atoi(str1));
    printf("Cadena: '%s', Entero: %d\n", str2, ft_atoi(str2));
    printf("Cadena: '%s', Entero: %d\n", str3, ft_atoi(str3));
    printf("Cadena: '%s', Entero: %d\n", str4, ft_atoi(str4));
    printf("Cadena: '%s', Entero: %d\n", str5, ft_atoi(str5));

    return 0;
}*/
