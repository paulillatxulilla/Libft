/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:51:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 18:55:34 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    if (s == NULL || f == NULL) {
        return;
    }
    unsigned int i = 0;
        while (s[i] != '\0') {
            f(i, &s[i]);
            i++;
        }
}
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
}