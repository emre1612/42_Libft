/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 00:46:21 by emkaymak          #+#    #+#             */
/*   Updated: 2025/05/22 01:02:39 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    int len;
    int i;
    char *str;

    i = 0;
    len = ft_strlen(s1);
    if(!s1)
        return(NULL);
    str = malloc(sizeof(char) * len + 1);
    if(!str)
        return(NULL);

    while (i < len)
    {
        str[i] = s1[i];
        i++;
    }
    str[i] = '\0';
    return(str);
    
}