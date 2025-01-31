/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 17:23:33 by padan-pe          #+#    #+#             */
/*   Updated: 2025/01/27 16:06:47 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include<stdio.h>
int ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32;
    else 
        return c;

}
/*
int main (void)
{
    printf("%c", ft_toupper(60));
    return(0);
}
*/