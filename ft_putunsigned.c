/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:21:31 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/10 23:44:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putunsigned(unsigned int u)//%u
{
	int	count;

	count = 0;
	if (u >= 10)
		count = count + ft_putnbr(u / 10);
	count = count + ft_putchar((u % 10) + 48);
	return (count);
}
