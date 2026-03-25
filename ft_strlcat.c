/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 14:50:30 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/14 12:20:10 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	dst: a buffer to catenate to
 * 	src: NUL-terminated string to catenate from
 * 	size: full size of 'dst'
 *
 * Return value
 * 	the initial length of 'dst' plus the length of 'src'.
 *
 * Description
 * 	Appends the NUL-terminated string 'src' to the end of 'dst'.
 * 	It will append at most 'size - strlen(dst) - 1'' bytes,
 * 	NUL-terminating the result.
 *
 * Undefined behavior
 * 	Function assumes that 'src' and 'dst' are a NUL-terminated C string.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (size + src_len);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
