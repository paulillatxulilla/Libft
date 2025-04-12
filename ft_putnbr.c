/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:01:09 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:45 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int i)//%i %d
{
	int	count;

	count = 0;
	if (i == -2147483648)
		return (write(1, "-2147483648", 11));
	if (i < 0)
	{
		count = count + ft_putchar('-');
		i = -i;
	}
	if (i >= 10)
		count = count + ft_putnbr(i / 10);
	count = count + ft_putchar((i % 10) + '0');
	return (count);
}
