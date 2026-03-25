/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 12:06:19 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:08:57 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Parameters
 *  s: The string to output.
 *  fd: The file descriptor on which to write.
 *
 * Return value
 *  None
 *
 * External functions
 *  write
 *
 * Description Outputs the string ’s’ to the specified file
 * descriptor followed by a newline.
 *
 * Undefined behavior
 * 	The function assumes that 'fd' is a valid file descriptor.
 * 	The function assumes that 's' is a NULL-terminated C sttring.
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
