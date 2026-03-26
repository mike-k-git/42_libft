/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 18:44:18 by mkugan            #+#    #+#             */
/*   Updated: 2025/06/12 19:23:47 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

ssize_t	ft_putnchar_fd(char *c, size_t n, int fd)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (write(fd, c, 1) == -1)
			return (-1);
		i++;
	}
	return (n);
}
