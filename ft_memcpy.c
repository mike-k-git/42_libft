/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkugan <mkugan@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 13:09:44 by mkugan            #+#    #+#             */
/*   Updated: 2025/05/12 13:31:57 by mkugan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

/*
 * Parameters
 * 	dest: pointer to the object to copy to
 * 	src: pointer to the object to copy from
 * 	n: number of bytes to copy
 *
 * Return value
 * 	Returns a copy of 'dest' 
 *
 * Description
 * 	Copies count characters from the object pointed to by 'src' to
 * 	the object pointed to by 'dest'.
 * 	Both objects are interpreted as arrays of 'unsigned char'.
 *
 * Undefined behavior
 * 	The behavior is undefined if access occurs beyond
 * 	the end of the 'dest' array.
 * 	If the objects overlap, the behavior is undefined.
 * 	The behavior is undefined if either 'dest' or 'src' is
 * 	an invalid or null pointer.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
