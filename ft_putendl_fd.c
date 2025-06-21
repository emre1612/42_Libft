/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:38:45 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 01:59:01 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s)
	{
		write(fd, s, ft_strlen(s));
		write(fd, "\n", 1);
	}
}
// #include "fcntl.h"
// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	char a[100] = "emrecan";
// 	int fd = open("txtforexample.txt",O_CREAT | O_RDWR | O_APPEND, 0777);
// 	ft_putendl_fd(a,fd);
// 	return 0;
// }