/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:39:24 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:34:41 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

 void *ft_calloc(size_t nmemb, size_t size)
 {
    void *ptr = malloc(nmemb * size);

    if (ptr == NULL)
        return (NULL);
    
    memset (ptr, 0, nmemb * size);
        return ptr;
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