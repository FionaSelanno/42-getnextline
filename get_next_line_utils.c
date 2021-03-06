/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fiselann <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:07:36 by fiselann          #+#    #+#             */
/*   Updated: 2022/03/24 10:37:04 by fiselann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_eol(char *data)
{
	int	i;

	if (!data)
		return (0);
	i = 0;
	while (data[i])
	{
		if (data[i] == '\n')
		{
			return (i);
		}
		i++;
	}
	return (0);
}
