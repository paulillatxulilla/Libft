/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 17:53:47 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:34 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *str)//%s
{
	int	count;

	count = 0;
	if (!str)
		str = "(null)";
	while (*str)
	{
		count = count + ft_putchar(*str);
		str++;
	}
	return (count);
}
