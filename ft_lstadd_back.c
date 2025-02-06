/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:52:07 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 16:52:33 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)//colocamos new al final
{
    t_list  *current;

    current = *lst;
    if (*lst == NULL) //si lst está vacía añadimos el nuevo nodo
    {
        *lst = new;
        return;
    }
    while (current->next != NULL) //si list no vacía, recorremos hasta el ultimo nodo
        current = current->next;
    current->next = new; //metemos el nuevo nodo al final
}