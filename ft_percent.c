/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:26:55 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/10 22:42:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "libft.h"

int	ft_percent(va_list args, char str)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (str == 'p')
		return (ft_putpointer(va_arg(args, void *)));
	else if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (str == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (str == 'x')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (str == '%')
		return (ft_putchar('%'));
	return (0);
}
