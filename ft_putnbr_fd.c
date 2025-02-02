/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: padan-pe <padan-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:50:11 by padan-pe          #+#    #+#             */
/*   Updated: 2025/02/02 19:40:12 by padan-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void ft_putchar_fd(char c, int fd) //envía el número ‘n’ al file descriptor dado
{
    write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
    if (n == -2147483648) // manejo del caso mínimo de int
    {
        write(fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        ft_putchar_fd('-', fd);
        n = -n;
    }
    if (n >= 10)
    {
        ft_putnbr_fd(n / 10, fd);
        ft_putnbr_fd(n % 10, fd);
    }
    else
    {
        ft_putchar_fd(n + '0', fd);
    }
}
/*
#include <fcntl.h>  // para open()

int main()
{
    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    return (1);
    ft_putnbr_fd(-12345, fd);
    close(fd);
    return (0);
}*/