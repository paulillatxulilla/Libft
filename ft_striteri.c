/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:51:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:15 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void to_upper(unsigned int index, char *c) {
    if (*c >= 'a' && *c <= 'z') {
        *c = *c - ('a' - 'A');
    }
}

int main() {
    char str[] = "hello, world!";
    printf("Original: %s\n", str);

    ft_striteri(str, to_upper);

    printf("Modificado: %s\n", str);
    return 0;
}*/