/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:43:35 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 18:41:44 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
/*
int	main ()
{
	t_list *node1 = ft_lstnew("Nodo 1");
    t_list *node2 = ft_lstnew("Nodo 2");
    t_list *node3 = ft_lstnew("Nodo 3");

	node1->next = node2;
	node2->next = node3;
	int size = ft_lstsize(node1);
	printf("nodos %d", size);
	
	free(node1);
    free(node2);
    free(node3);
	return (0);
}*/