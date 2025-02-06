/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 17:10:47 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 17:11:08 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    ft_lstiter(t_list *lst, void (*f)(void *)) //aplica la funcion f al content de cada nodo
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}