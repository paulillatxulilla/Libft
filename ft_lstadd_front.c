/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:00:39 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/05 17:40:36 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)//content y next ya existen
{
	if((lst && new) != NULL)
	{
		new->next = *lst;//el siguiente del nuevo nodo sera el que era primer nodo
		*lst = new;//ahora se "actualiza" y la primera posicion apunta a new
	}
}