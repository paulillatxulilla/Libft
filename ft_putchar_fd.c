/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:49:36 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:35:10 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if(fd == -1) // Error al abrir el archivo
        return 1;
      ft_putchar_fd('A', fd); // escribe 'A' en el archivo

    close(fd); // cierra el archivo
    return 0;
}*/