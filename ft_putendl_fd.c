/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:50:39 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:55 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) 
      return 1;
    ft_putendl_fd("Hola, mundo!", fd);
    close(fd);
    return 0;
}*/