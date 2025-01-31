/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:45:30 by padan-pe          #+#    #+#             */
/*   Updated: 2025/01/27 16:05:50 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include<stdio.h>
size_t ft_strlen(const char *s) //calculates the length of the string pointed to by s, excluding the terminating null byte ('\0').
{
    int i;

    i = 0;
    while (s[i] != '\0')
      i++;
    return (i);
}
/*
int main(void)
{
    const char s[] = "hola amigo";
    printf("%zu", ft_strlen(s));
    return(0);
}*/