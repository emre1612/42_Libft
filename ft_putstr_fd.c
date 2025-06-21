/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:34:27 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:29:06 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
// #include "fcntl.h"
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	int fd = open("txtforexample.txt",O_CREAT | O_RDWR | O_APPEND, 0777);
// 	ft_putstr_fd("emre",fd);
// 	return 0;
// }