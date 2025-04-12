/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:37:43 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/10 23:43:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_puthex(size_t x, char *base)//%x%X
{
	int		count;

	count = 0;
	if (x >= 16)
		count = count + ft_puthex(x / 16, base);
	count = count + ft_putchar(base[x % 16]);
	return (count);
}
