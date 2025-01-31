/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:38:44 by padan-pe          #+#    #+#             */
/*   Updated: 2025/01/27 16:06:39 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include<stdio.h>
int ft_tolower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    else 
        return c;

}
/*
int main (void)
{
    printf("%c", ft_tolower(97));
    return(0);
}
*/