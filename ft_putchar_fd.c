/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:49:09 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:02:02 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/* Parameters
 *  c: The character to output.
 *  fd: The file descriptor on which to write.
 *
 * Return value
 *  None
 *
 * External functions
 *  write
 *
 * Description
 *  Outputs the character ’c’ to the specified file descriptor.
 *
 * Undefined behavior
 * 	The function assumes that 'fd' is a valid file descriptor.
 */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
