/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 16:55:48 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/06 17:01:04 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst)
        {
            if (del)
                del(lst->content);
            free(lst);
        }
}