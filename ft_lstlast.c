/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:21:59 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 16:51:24 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
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
        printf("nodo añadido, lista completa:%s %s %s \n %s.", *(char *)nodo1->content, *(char *)nodo2->content, *(char *)nodo3->content, *(char *)nodo4->content);
    else
        printf("soy inutil");
    free(nodo1);
    free(nodo2);
    free(nodo3);
    free(nodo4);
    return (0);
}*/