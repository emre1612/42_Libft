/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:26:37 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 01:59:36 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// #include "fcntl.h"
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int fd = open("txtforexample.txt",O_CREAT | O_RDWR | O_APPEND, 0777);
// 	ft_putchar_fd('c',fd);
// 	return 0;
// }