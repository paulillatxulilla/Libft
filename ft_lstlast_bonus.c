/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:21:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:36:18 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int main ()
{
    t_list *nodo1 = ft_lstnew("hola");
    t_list *nodo2 = ft_lstnew("que");
    t_list *nodo3 = ft_lstnew("tal");
    t_list *nodo4 = ft_lstnew("bien");
    
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    t_list *añado = ft_lstlast(nodo4);
    
    if (añado != NULL)
        printf("nodo añadido %s", *(char *)nodo4->content);
    else
        printf("soy inutil");
    free(nodo4);
    return (0);
}*/