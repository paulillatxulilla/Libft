/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:39:24 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:37:07 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset (ptr, 0, nmemb * size);
	return (ptr);
}
/*
 int main (void)
{
    int *arr = (int *)ft_calloc(5, sizeof(int));
    int i = 0;

    if (arr != NULL)
    {   
        while(i < 5)
        {
           i++;
           printf("arr[%d] = %d", i, arr[i]);
        }
        free(arr);
    }
    else
    printf ("error");
    return (0);
 }*/