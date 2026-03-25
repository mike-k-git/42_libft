/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:30:22 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 14:50:20 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	dst: a buffer to copy to
 * 	src: NUL-terminated string to copy from
 * 	size: a number of character to copy, including NUL-terminator
 *
 * Return value
 * 	the length of 'src'
 *
 * Description
 * 	Computes the length of 'src', which MUST be NUL-terminated,
 * 	and copies up to 'size - 1'' bytes from 'src' to 'dst',
 * 	NUL-terminating the result.
 *
 * Undefined behavior
 * 	Function assumes that 'src' is a NUL-terminated C string.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
