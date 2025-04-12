/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paula <paula@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:51:05 by padan-pe          #+#    #+#             */
/*   Updated: 2025/04/12 15:34:37 by paula            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}
/*
#include <fcntl.h> // Para abrir archivos (si es necesario)
int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT, 0644);
    if (fd == -1) // Error al abrir el archivo
        return 1;
    ft_putstr_fd("Hola, mundo!", fd); // Escribe la cadena en el archivo
    close(fd); // Cierra el archivo
    return 0;
}*/